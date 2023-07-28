#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	flip_bits - Returns the amount of bits that have to be fliped.
 *	@n: First number.
 *	@m: Second number.
 *	Return: Amount of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	unsigned int num = 0;

	num = n ^ m;

	while (num >= 1)
	{

		if (num & 1)
			counter++;

		num >>= 1;
	}

	return (counter);
}
