#include "main.h"
/**
 * _puts - Returns the lenght of a String
 * @str: a pointer to a char variable
 * Return: Nothing.
 */

void _puts(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		_putchar(str[iter]);
		iter++;
	}

	_putchar('\n');
}

