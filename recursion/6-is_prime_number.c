#include "main.h"
/**
 * prime_re - Returns 1 is a number is prime and 0 otherwise.
 * @n: int to calc the root
 * @it: int to find the square root
 * Return: The square root of n
 */

int prime_re(int n, int it)
{
	if (n == it)
		return (1);
	else if (n % it == 0)
		return (0);
	else
		return (prime_re(n, it + 1));
}

/**
 * is_prime_number - Returns 1 if a number is prime and 0 otherwise.
 * @n: int to calc the root.
 * Return: The square root of n.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_re(n, 2));
}
