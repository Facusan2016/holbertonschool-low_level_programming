#include "lists.h"
#include <stdio.h>

/**
 *	print_dlistint - Prints all the elements on the list.
 *	@h: Reference to the head of the list.
 *	Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t amount_n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		amount_n++;
	}

	return (amount_n);

}
