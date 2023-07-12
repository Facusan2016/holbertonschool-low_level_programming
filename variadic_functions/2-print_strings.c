#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints all the strings using the separator.
 * @separator: Strings separator.
 * @n: amount of Strings.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);

	if (separator == NULL)
		separator = "";

	for (; i < n - 1; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", str, separator);
	}

	str = va_arg(arg, char *);
	printf("%s\n", str);

	va_end(arg);
}
