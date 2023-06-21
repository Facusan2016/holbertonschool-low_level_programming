#include "main.h"
/**
 * rev_string - Write a functions that prints a string in reverse.
 * @s: a pointer to a char variable
 * Return: Nothing.
 */

void rev_string(char *s)
{

	int count = 0;
	int i, j;
	char aux;

	while (s[count] != '\0')
		count++;

	i = 0;
	j = count - 1;

	while ((i + j) == count - 1 && i < j)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;

		i++;
		j--;

	}



}

