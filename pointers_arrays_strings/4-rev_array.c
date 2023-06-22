#include "main.h"
/**
 * reverse_array - Compares two Strings.
 * @a: a pointer to a String.
 * @n: a pointer to another String.
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{

	int i, j;
	int aux;

	i = 0;
	j = n - 1;

		while ((i + j) <= n - 1 && i < j)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;

		i++;
	}

}

