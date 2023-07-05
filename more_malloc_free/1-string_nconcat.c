#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First String.
 * @s2: Second String.
 * @n: The first n bytes to copy.
 * Return: Pointer to the String.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i = 0, j = 0;
	char *p;

	if (s1 != NULL)
		size1 = strlen(s1);

	if (s2 != NULL)
	{
		size2 = strlen(s2);
		if (n >= size2)
			n = size2;
	}

	p = malloc(sizeof(char) * (size1 + size2) + 1);

	if (p == NULL)
		return (NULL);

	for (; i < size1; i++)
		p[i] = s1[i];

	for (; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';

	return (p);

}
