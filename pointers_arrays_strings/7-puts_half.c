#include "main.h"
/**
 * puts_half - Write the half of a string.
 * @str: a pointer to a char variable
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
		count = (count / 2);
	else
		count = (count - 1) / 2 + 1;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}

