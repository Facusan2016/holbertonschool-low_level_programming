#include "main.h"
/**
 * _strpbrk - Searchs a string on any set of bytes
 * @s: Pointer to a String.
 * @accept: string to be found.
 * Return: a pointer to the first ocurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	char *iter = s;

	while (*iter != '\0')
	{
		j = 0;

		while (*iter != accept[j] && accept[j] != '\0')
		{
			j++;
		}

		if (*iter == accept[j])
		{
			return (iter);
		}

		iter++;

	}

	return (0);
}
