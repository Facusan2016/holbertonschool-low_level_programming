#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	get_dnodeint_at_index - Returns the nth node.
 *	@head: Reference to the head of the list.
 *	@index: Nth node to be returned.
 *	Return: The node on the nth place.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *q;

	q = head;

	while (head != NULL && index)
	{
		q = q->next;
		index--;
	}

	if (index > 0)
		return (NULL);

	return (q);
}
