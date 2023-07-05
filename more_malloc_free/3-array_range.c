#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: min int.
 * @max: max int.
 * Return: Pointer to the array of integers.
 */

int *array_range(int min, int max)
{
	int *p;
	int i = min;
	int j = 0;

	if (min > max)
		return (NULL);

	if (min == max)
	{
		p = malloc(sizeof(int));
		p[0] = min;

		return (p);
	}

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (; j < (max - min); j++)
	{
		p[j] = i;
		i++;
	}

	return (p);

}
