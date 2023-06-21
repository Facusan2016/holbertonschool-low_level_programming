#include "main.h"
/**
 * _strcat - Write a functions that prints every odd character
 * @dest: a pointer to a string.
 * @src: a pointer to another string.
 * Return: A string pointer.
 */

char *_strcat(char *dest, char *src)
{

	char *init = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}


	return (init);
}

