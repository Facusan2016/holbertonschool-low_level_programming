#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet 10 times.
 * Return: It returns nothing.
 */

void print_alphabet_x10(void)
{
	int iter;

	char iterc;

	for (iter = 0; iter < 9; iter++)
	{

		for (iterc = 'a'; iterc <= 'z'; iterc++)
		{
			_putchar(iterc);
		}

		_putchar('\n');
	}

}
