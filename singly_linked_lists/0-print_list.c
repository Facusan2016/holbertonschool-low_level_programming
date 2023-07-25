#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	print_list - Prints the elements of a list.
 *	@h: List.
 *	Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);

}
