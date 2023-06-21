#include "main.h"
/**
 * _strncat - Write a functions that concatenates two strings.
 * @dest: a pointer to a string.
 * @src: a pointer to another string.
 * @n: using almost n bytes from src.
 * Return: A string pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *init = dest;
	int count = 0;

	while (*dest != '\0')
		dest++;


	while (*src != '\0' && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}

	return (init);
}

