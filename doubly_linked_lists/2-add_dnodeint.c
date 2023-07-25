#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	add_dnodeint - Adds a node to the beggining of the list.
 *	@head: Reference to the head of the list.
 *	@n: Number to be added to the new node.
 *	Return: The number of nodes.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

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
		p->prev = NULL;
		p->next = *head;
		(*head)->prev = p;
		*head = p;
	}

	return (p);
}
