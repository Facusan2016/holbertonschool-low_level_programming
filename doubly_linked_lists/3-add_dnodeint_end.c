#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	add_dnodeint_end - Adds a node to the end of the list.
 *	@head: Reference to the head of the list.
 *	@n: Number to be added to the new node.
 *	Return: The number of nodes.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *q;

	p = malloc(sizeof(dlistint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;

	if (*head == NULL)
	{
		p->next = NULL;
		p->prev = NULL;
		*head = p;

	} else
	{
		q = *head;
		while (q->next != NULL)
			q = q->next;

		q->next = p;
		p->next = NULL;
		p->prev = q;
	}

	return (p);
}
