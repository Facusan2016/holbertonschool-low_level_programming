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
	int iter = 0;

	while (iter < n && src[iter] != '\0')
	{
		dest[iter] = src[iter];
		iter++;
	}

	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}

	return (dest);

}

