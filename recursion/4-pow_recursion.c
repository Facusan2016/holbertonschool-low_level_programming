#include "main.h"
/**
 * _pow_recursion - Write a functions that prints a string in reverse.
 * @x: int to calc the exponent.
 * @y: int the calc the exponent
 * Return: X to the power of Y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));

	} else if (y == 0)
	{
		return (1);

	} else
	{
		return (x);
	}

}
