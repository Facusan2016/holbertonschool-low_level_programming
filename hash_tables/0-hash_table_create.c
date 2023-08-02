#include "hash_tables.h"
#include <stdlib.h>

/**
 *	hash_table_create - Creates a hash table.
 *	@size: size of the table.
 *	Return: Returns a pointer to the new table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	hash_node_t **array;

	t = malloc(sizeof(hash_table_t));

	if (t == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
		return (NULL);

	t->size = size;
	t->array = array;

	return (t);

}
