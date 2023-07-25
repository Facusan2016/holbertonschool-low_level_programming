#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	list_len - Returns the amount elements of a list.
 *	@h: List.
 *	Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
