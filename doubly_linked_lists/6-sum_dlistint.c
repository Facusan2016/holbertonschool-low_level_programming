#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *	sum_dlistint - Sums all the nodes of the list.
 *	@head: Reference to the head of the list.
 *	Return: The node on the nth place.
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
