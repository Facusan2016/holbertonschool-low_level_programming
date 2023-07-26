#include "main.h"
#include <stdlib.h>

/**
 *	binary_to_uint - Converts a number from binary to an unsigned int.
 *	@b: Binary to be converted.
 *	Return: b converted to unigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		total <<= 1;
		total += b[i] - '0';
		i++;
	}

	if (b[i] == '\0')
		return (total);
	else
		return (0);
}
