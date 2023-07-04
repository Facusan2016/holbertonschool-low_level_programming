#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a char.
 * @size: Size of the array.
 * @c: Char to initialize the array
 * Return: Pointer to the array.
 */

char *create_array(unsigned int size, char c)
{

	if (size != 0)
	{
		char *p = malloc(sizeof(char) * size);

		unsigned int it;

		if (p == NULL)
		{
			return (NULL);
		}

		for	(it = 0; it < size; it++)
			p[it] = c;

		return (p);

	} else
	{
		return (NULL);
	}


}

