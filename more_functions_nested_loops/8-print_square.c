#include "main.h"
/**
 * print_square - Prints a square on the terminal.
 * @size: size of the square
 * Return: Nothing.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}


