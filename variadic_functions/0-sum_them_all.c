#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- Sums all the parameters.
 * @n: amount of parameters.
 * Return: The sum of all the integers params.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0, sum = 0, result = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (; i < n; i++)
	{
		result = va_arg(arg, int);
		sum += result;
	}

	va_end(arg);

	return (sum);

}
