#include "main.h"
/**
 * _strcpy - A function that copy an array into other
 * @dest: Pointer to array that we're going to copy into
 * @src: Pointer to array is going to be copy.
 * Return: Char pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
