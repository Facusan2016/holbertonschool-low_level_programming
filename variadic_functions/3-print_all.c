#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * selector - Selects and print the corresponding type.
 * @x: Char to be selected.
 * @v: Char to be selected.
 * @arg: va_list argument.
 * Return: Nothing.
 */

void selector(char x, va_list arg, int *v)
{
	char *c;

	switch (x)
	{
		case 'c':
			printf("%c", va_arg(arg, int));
			*v = 0;
			break;
		case 'i':
			printf("%i", va_arg(arg, int));
			*v = 0;
			break;
		case 's':
			c = va_arg(arg, char*);
			if (c == NULL)
				c = "(nil)";
			printf("%s", c);
			*v = 0;
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			*v = 0;
			break;
		default:
			*v = 1;
	}
}

/**
 * print_all - Prints all the strings using the separator.
 * @format: Format of the string.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 0;
	va_list args;

	va_start(args, format);

	i = 0;

	while (format[i] != '\0' && format != NULL)
	{
		selector(format[i], args, &flag);

		while (format[i + 1] != '\0' && flag != 1)
		{
			printf(", ");
			break;
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
