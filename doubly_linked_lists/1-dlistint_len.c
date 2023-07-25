#include "lists.h"

/**
 *	dlistint_len - Returns the number of elements on a linked list.
 *	@h: Reference to the head of the list.
 *	Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t amount_n = 0;

	while (h != NULL)
	{
		h = h->next;
		amount_n++;
	}

	return (amount_n);

}
