#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	clear_bit - sets the value of a bit to 0 at a given index.
 *	@n: Unsigned int to be set.
 *	@index: index to the bit that would be set.
 *	Return: 1 if it worked, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
