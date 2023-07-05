#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- Copies the string into a new memory.
 * @b: Size of the array.
 * Return: Pointer to the array.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
