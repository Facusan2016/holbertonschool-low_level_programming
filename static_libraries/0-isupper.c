#include "main.h"
/**
 * _isupper - Checks for uppercase
 * @c: int to check
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
