#include "main.h"
/**
 * _strlen - Returns the lenght of a String
 * @s: a pointer to a char variable
 * Return: Nothing.
 */

int _strlen(char *s)
{
	int count = 0;

	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

