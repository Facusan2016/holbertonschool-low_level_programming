#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: Is an int value.
 *
 * Return: The last digit of a number.
 */

int print_last_digit(int n)
{
	int val = n % 10;

	if (val < 0)
	{
		val = -val;
	}

	_putchar (val + '0');
	return (val);
}
