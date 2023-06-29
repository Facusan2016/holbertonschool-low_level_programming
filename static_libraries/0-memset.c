#include "main.h"
#include <stdio.h>
/**
 * _memset - This function fills memory with a constant byte
 * @s: a pointer to memory space.
 * @b: char to fill with.
 * @n: how much bytes must be filled.
 * Return: a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}

	return (s);
}
