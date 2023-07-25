#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	free_dlistint - Frees all the memory.
 *	@head: Reference to the head of the list.
 *	Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *q;

	while (head != NULL)
	{
		q = head;
		head = head->next;
		free(q);
	}
}
