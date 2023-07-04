#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Copies the string into a new memory.
 * @str: Size of the array.
 * Return: Pointer to the array.
 */

char *_strdup(char *str)
{
	int i, j;
	char *p;


	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * i + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = str[j];

	return (p);

}
