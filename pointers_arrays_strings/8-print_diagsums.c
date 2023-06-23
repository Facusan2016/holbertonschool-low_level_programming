#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the diagonal of n square matrix.
 * @a: Two dimensional array representing the chessboard.
 * @size: Size of the matrix.
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(&a[0] + i * size + i);

	for (i = 0; i < size; i++)
		sum2 += *(&a[size - 1] + (i * (size - 1)));


	printf("%i, %i\n", sum1, sum2);
}
