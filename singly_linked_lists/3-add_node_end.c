#include "lists.h"
#define _DEFAULT_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *	add_node_end - Adds a new node to the end of the list.
 *	@head: Head of the list.
 *	@str: String to be added.
 *	Return: the addres of the new element or null if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strcp;
	list_t *p, *q;

	if (str == NULL)
		strcp = strdup("(nil)");
	else
		strcp = strdup(str);

	if (strcp == NULL)
		return (NULL);

	p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	q = *head;
	p->str = strcp;
	p->len = strlen(strcp);
	p->next = NULL;

	if (q == NULL)
	{
		*head = p;
	} else
	{
		while (q->next != NULL)
			q = q->next;

		q->next = p;
	}

	return (p);

}
