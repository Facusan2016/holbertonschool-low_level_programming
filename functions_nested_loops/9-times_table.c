#include "main.h"
/**
 * times_table - Write a function that prints the 9 times table
 * Return: Nothing.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{

			if (j * i <= 9)
			{

				if (j > 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}

			}
			else
			{

				_putchar (',');
				_putchar (' ');
				_putchar ((j * i) / 10 + '0');

			}

			_putchar ((j * i) % 10 + '0');

			if (j == 9)
			{
				_putchar('\n');
			}



		}
	}
}
