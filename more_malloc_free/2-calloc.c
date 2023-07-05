#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Second String.
 * @size: The first n bytes to copy.
 * Return: Pointer to the String.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *p;
	int *q;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	q = p;

	while (nmemb > 0)
	{
		*q = 0;
		q = q + nmemb * size;
		nmemb--;
	}

	return (p);
}
