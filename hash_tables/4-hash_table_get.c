#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: Table where we have to find the key.
 * @key: the key
 * Return: NULL if it couldn't be found or the value asociated to key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int pos;
	hash_node_t *iter;

	if (ht == NULL || key == NULL)
		return (NULL);

	pos = key_index((const unsigned char *)key, ht->size);
	iter = ht->array[pos];

	while (iter != NULL && strcmp(iter->key, key) != 0)
		iter = iter->next;

	if (iter != NULL)
		return (iter->value);

	return (NULL);

}
