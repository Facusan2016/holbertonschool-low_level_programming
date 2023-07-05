#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two Strings.
 * @s1: First String.
 * @s2: Second String.
 * Return: Pointer to the new String.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	int size1 = strlen(s1);

	int size2 = strlen(s2);

	char *p;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	p = malloc(sizeof(char) * size1 + sizeof(char) * size2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	j = 0;

	for (; i < (size1 + size2); i++)
	{
		p[i] = s2[j];
		j++;
	}

	p[i] = '\0';
	return (p);

}
