#include "main.h"
/**
 * _print_rev_recursion - Write a functions that prints a string in reverse.
 * @s: a pointer to a String
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}

