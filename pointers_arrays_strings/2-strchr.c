#include "main.h"
/**
 * _strchr - This function returns a pointer to the first ocurrence of c in s
 * @s: Pointer to a String.
 * @c: character to be found.
 * Return: a pointer to the first ocurrence.
 */

char *_strchr(char *s, char c)
{
	char *iter = s;

	while (*iter != '\0' && *iter != c)
		iter++;

	if (*iter != '\0')
		return (iter);
	else
		return (0);
}
