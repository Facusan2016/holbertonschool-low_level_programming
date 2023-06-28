#include "main.h"
/**
 * _strlen_recursion - Write a functions that prints a string in reverse.
 * @s: a pointer to a String
 * Return: Nothing.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));

	} else
	{
		return (0);
	}
}

