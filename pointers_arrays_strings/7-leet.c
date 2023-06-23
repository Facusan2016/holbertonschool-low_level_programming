#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @c: a pointer to a string.
 * Return: a pointer to a string.
 */

char *leet(char *c)
{
	int nums[6] = {4, 3, 0, 7, 1};

	int i1 = 0;

	int i2;

	char cr[6] = {'a', 'e', 'o', 't', 'l', '\0'};

	while (c[i1] != '\0')
	{
		i2 = 0;

		while (c[i1] != cr[i2] && c[i1] != cr[i2] - 32 && cr[i2] != '\0')
			i2++;

		if (cr[i2] != '\0')
			c[i1] = nums[i2] + 48;


		i1++;
	}

	return (c);


}
