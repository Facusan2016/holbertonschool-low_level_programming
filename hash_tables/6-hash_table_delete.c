#include "hash_tables.h"

/**
 *	free_list_hash - Frees a list.
 *	@head: Head of the list.
 *	Return: Nothing.
 */

void free_list_hash(hash_node_t *head)
{
	hash_node_t *torem;

	while (head != NULL)
	{
		torem = head;
		head = head->next;
		free(torem->value);
		free(torem->key);
		free(torem);
	}

}

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int arr_it = 0;

	while (ht != NULL && arr_it < ht->size)
		free_list_hash(ht->array[arr_it++]);

	free(ht->array);
	free(ht);
}
