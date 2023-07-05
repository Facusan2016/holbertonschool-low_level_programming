#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two Strings.
 * @s1: First String.
 * @s2: Second String.
 * Return: Pointer to the new String.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	int size1 = 0;
	int size2 = 0;

	char *p;

	if (s1 != NULL)
		size1 = strlen(s1);

	if (s2 != NULL)
		size2 = strlen(s2);

	p = malloc(sizeof(char) * size1 + sizeof(char) * size2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	j = 0;

	for (; i < (size1 + size2) && s2 != NULL; i++)
	{
		p[i] = s2[j];
		j++;
	}

	p[i] = '\0';
	return (p);

}
