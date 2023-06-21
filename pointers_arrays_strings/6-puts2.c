#include "main.h"
/**
 * puts2 - Write a functions that prints every odd character
 * @str: a pointer to a char variable
 * Return: Nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

