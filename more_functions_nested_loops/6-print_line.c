#include "main.h"
/**
 * print_line - Draws a line on the terminal
 * @n: Number of times that the character _ is going to be printed.
 * Return: Description of the returned value
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}


