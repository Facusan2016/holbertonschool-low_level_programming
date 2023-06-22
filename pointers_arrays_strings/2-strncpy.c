#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: a pointer to a string.
 * @src: a pointer to another string.
 * @n: Amount of characters to copy
 * Return: A string pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}

