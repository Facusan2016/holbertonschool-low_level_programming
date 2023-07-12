#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints all the number using the separator.
 * @separator: Numbers separator.
 * @n: amount of numbers.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int num = 0;

	if (n == 0)
		return;

	va_start(arg, n);

	if (separator == NULL)
		separator = "";

	for (; i < n - 1; i++)
	{
		num = va_arg(arg, int);
		printf("%i%s", num, separator);
	}

	num = va_arg(arg, int);
	printf("%i\n", num);

	va_end(arg);
}
