#include "main.h"
/**
 * print_alphabet - This function prints the alphabet.
 * Return: It returns nothing.
 */

void print_alphabet(void)
{
	char iter;

	for (iter = 'a'; iter <= 'z'; iter++)
	{
		_putchar(iter);
	}
	_putchar('\n');
}
