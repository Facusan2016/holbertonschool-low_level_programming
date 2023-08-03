#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table.
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int it_arr = 0;
	char n = 0;
	hash_node_t *iter;

	if (ht != NULL)
	{
		printf("{");
		while (it_arr < ht->size)
		{
			iter = ht->array[it_arr];
			while (iter != NULL)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", iter->key, iter->value);
				iter = iter->next;
				n = 1;
			}
			it_arr++;
		}
		printf("}\n");
	}
}
