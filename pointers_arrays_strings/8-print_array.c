#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints n elements of an array
 * @a: a pointer to a int array
 * @n: The number of elements to be printed.
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count == n - 1)
			printf("%i\n", a[count]);
		else
			printf("%i, ", a[count]);
		count++;
	}
}
