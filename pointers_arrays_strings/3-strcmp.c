#include "main.h"
/**
 * _strcmp - Compares two Strings.
 * @s1: a pointer to a String.
 * @s2: a pointer to another String.
 * Return: 0 if equal, a negative value if s1 is less than s2 and positive.
 */

int _strcmp(char *s1, char *s2)
{
	int iter = 0;

	while (s1[iter] != '\0' && s2[iter] != '\0' && s1[iter] == s2[iter])
		iter++;

	if (s1[iter] == '\0' && s2[iter] == '\0')
		return (0);
	else if (s1[iter] > s2[iter])
		return (15);
	else
		return (-15);
}

