#include "main.h"
/**
 * swap_int - Changes the value of the argument to 98.
 * @a: a pointer to an int variable
 * @b: a pointer to other int variable
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

