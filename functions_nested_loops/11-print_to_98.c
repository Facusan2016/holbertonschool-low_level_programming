#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98 in order.
 * @n: First integer.
 * Return: Nothing.
 */

void print_to_98(int n)
{
	int iter;

	if (n >= 98)
	{
		for (iter = n; iter >= 98; iter--)
		{
			if (iter > 98)
				printf("%i, ", iter);
			else
				printf("%i\n", iter);
		}
	} else
	{
		for (iter = n; iter <= 98; iter++)
		{

			if (iter < 98)
				printf("%i, ", iter);
			else
				printf("%i\n", iter);
		}
	}
}
