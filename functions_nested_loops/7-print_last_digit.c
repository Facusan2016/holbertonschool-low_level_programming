#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: Is an int value.
 *
 * Return: The last digit of a number.
 */

int print_last_digit(int n)
{
	if (n > 0)
		return (n % 10);
	else if (n == 0)
		return (0);
	else
		return (-n % 10);
}
