#include "main.h"
/**
 * _memcpy - This function fills memory with a constant byte
 * @dest: memory to copy to.
 * @src: memory to copy from.
 * @n: how much bytes must be filled.
 * Return: a pointer to the memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
