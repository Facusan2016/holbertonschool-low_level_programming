#include "main.h"
/**
 * print_triangle - Prints a triangle on the terminal.
 * @size: Size of the triangle
 * Return: Nothing.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (j = i; j >= 0; j--)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

	} else
	{
		_putchar('\n');
	}

}


