#include "main.h"

/**
 * sqr_re - Returns the square root recursive.
 * @n: int to calc the root
 * @it: int to find the square root
 * Return: The square root of n
 */

int sqr_re(int n, int it)
{
	if (n == it * it)
		return (it);
	else if (n != it * it && it > 2)
		return (sqr_re(n, it - 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: int to calc the root.
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (sqr_re(n, n / 2));
}
