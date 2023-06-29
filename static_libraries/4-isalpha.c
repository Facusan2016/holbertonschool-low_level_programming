#include "main.h"
/**
 * _isalpha - Write a function that checks for lowercase character.
 * @c: Is an int value.
 * Return: 1 if c is lowercase and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
