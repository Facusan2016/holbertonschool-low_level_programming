#include "main.h"
#include <stdlib.h>

/**
 *	print_binary - Converts a number from binary to an unsigned int.
 *	@n: Unsigned int to be printed.
 *	Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');

}
