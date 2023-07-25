#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  delete_dnodeint_at_index - Delete the node on index.
 *	@head: Reference to the head of the list.
 *	@index: Index where the new node has to be added.
 *	Return: The node added.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *q;

	p = *head;

	if (*head == NULL)
		return (-1);
	else if ((*head)->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);

	} else if (index == 0 && p->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(p);
		return (1);
	}
		while (p != NULL && index)
		{
			p = p->next;
			index--;
		}
		q = p;

		if (p == NULL)
			return (-1);

		if (p->next == NULL)
		{
			p->prev->next = NULL;
			free(p);
		} else
		{
			q->next->prev = p->prev;
			q->prev->next = p->next;
			free(p);
		}
		return (1);
}
