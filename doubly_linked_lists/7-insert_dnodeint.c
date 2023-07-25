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
	dlistint_t *p, *q;

	p = malloc(sizeof(dlistint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;
	q = *h;
	idx--;

	if (*h == NULL || idx == 0)
		add_dnodeint(h, n);
	else
	{
		while (q != NULL && idx)
		{
			q = q->next;
			idx--;
		}

		if (q == NULL && idx == 0)
		{
			add_dnodeint_end(h, n);

		} else if (q != NULL && idx == 0)
		{
			p->next = q->next;
			p->prev = q;
			q->next = p;
			(q->next)->prev = p;

		} else
		{
			return (NULL);
		}
	}
	return (p);
}
