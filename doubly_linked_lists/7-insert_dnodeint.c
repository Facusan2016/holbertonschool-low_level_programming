#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	insert_dnodeint_at_index - Sums all the nodes of the list.
 *	@h: Reference to the head of the list.
 *	@idx: Index where the new node has to be added.
 *	@n: Number to be added to the node.
 *	Return: The node added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *q, *p;

	if (idx == 0)
		return (add_dnodeint(h, n));

	q = *h;

	while (q != NULL && idx > 1)
	{
		q = q->next;
		idx--;
	}

	if (q == NULL)
		return (NULL);

	if (q->next == NULL && idx == 1)
		return (add_dnodeint(h, n));

	p = malloc(sizeof(dlistint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = q->next;
	p->prev = q;
	q->next = p;
	(q->next)->prev = p;

	return (p);

}
