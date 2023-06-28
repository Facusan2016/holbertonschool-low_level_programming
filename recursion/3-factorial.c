#include "main.h"
/**
 * factorial - Write a functions that prints a string in reverse.
 * @n: int to calculate the factorial
 * Return: Nothing.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	} else if (n == 0)
	{
		return (1);

	} else
	{
		return (n * factorial(n - 1));
	}

}

