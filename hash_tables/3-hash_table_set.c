#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
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
	hash_node_t *new, *iter;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	iter = ht->array[pos];

	while (iter != NULL && strcmp(iter->key, key) != 0)
		iter = iter->next;
	if (iter == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		if (new->value == NULL)
		{
			free(new->key);
			free(new);
			return (0);
		}
		new->next = ht->array[pos];
		ht->array[pos] = new;
	} else
	{
		free(iter->value);
		iter->value = strdup(value);
		if (iter->value == NULL)
			return (0);
	}
	return (1);
}
