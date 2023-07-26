#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	get_bit - Returns the value of a bit at a given index.
 *	@n: Unsigned int to be printed.
 *	@index: index to the bit that would be returned.
 *	Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	while (index >= 1)
	{
		n >>= 1;
		index--;
	}

	if (index == 0)
		return (n & 1);

	return (-1);
}
