#include "lists.h"
#define _DEFAULT_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *	add_node - Adds a new node to the beggining of the list.
 *	@head: Head of the list.
 *	@str: String to be added.
 *	Return: the addres of the new element or null if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *strcp;
	list_t *p;

	if (str == NULL)
		strcp = strdup("(nil)");
	else
		strcp = strdup(str);

	if (strcp == NULL)
		return (NULL);

	p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	p->str = strcp;
	p->len = strlen(strcp);
	p->next = *head;
	*head = p;

	return (p);

}
