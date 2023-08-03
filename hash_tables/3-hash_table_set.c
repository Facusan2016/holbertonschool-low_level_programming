#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: Hash table to add the new node.
 * @key: String used to generate hash value
 * @value: Value to be added in the new node.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int pos;
	hash_node_t *new;

	if (key == NULL || *key == '\0')
		return (0);

	if (value == NULL)
		value = "(nil)";

	pos = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[pos];
	ht->array[pos] = new;

	return (1);
}
