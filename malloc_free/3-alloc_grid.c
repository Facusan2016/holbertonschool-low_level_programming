#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Creates a two dimensional array.
 * @width: Width of the array.
 * @height: Height of the array.
 * Return: Pointer to the new String.
 */

int **alloc_grid(int width, int height)
{

	int **p;

	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
			return (NULL);
	}

	return (p);

}
