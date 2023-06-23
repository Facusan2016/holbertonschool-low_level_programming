#include "main.h"
/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: Pointer to a String.
 * @accept: character to be found.
 * Return: a pointer to the first ocurrence.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
			j++;

		if(accept[j] == '\0')
			return(i);

		i++;
	}

	return (0);
}
