#include "lists.h"
#include <stdlib.h>

/**
 *	free_list - Frees a list.
 *	@head: Head of the list.
 *	Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *torem;

	while (head != NULL)
	{
		torem = head;
		head = head->next;
		free(torem->str);
		free(torem);
	}

}
