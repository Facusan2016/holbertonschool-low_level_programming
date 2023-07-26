#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	set_bit - sets the value of a bit to 1 at a given index.
 *	@n: Unsigned int to be set.
 *	@index: index to the bit that would be set.
 *	Return: 1 if it worked, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int switcher, copy;

	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	copy = *n;
	switcher = 1;


	while (index > 0)
	{
		copy >>= 1;
		switcher <<= 1;
		index--;
	}

	*n = switcher | *n;
	return (1);
}
