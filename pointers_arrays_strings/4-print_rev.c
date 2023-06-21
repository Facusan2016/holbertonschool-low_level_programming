#include "main.h"
/**
 * print_rev - Write a functions that prints a string in reverse.
 * @s: a pointer to a char variable
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int iter = 0;

	while (s[iter] != '\0')
	{
		iter++;
	}

	iter--;

	while (iter >= 0)
	{
		_putchar(s[iter]);
		iter--;
	}

	_putchar('\n');
}

