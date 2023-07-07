#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * wordcnt - Count how many words separated by a space are in a string.
 * @str: Word to be counted.
 * Return: Quantity.
 */

int wordcnt(char *str)
{
	int state = 0, wc = 0;

	while (*str)
	{
		if (*str == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wc;
		}

		str++;
	}

	return (wc);

}
/**
 * strtow - Splits a string into words.
 * @str: String to be splited.
 * Return: String.
 */

char **strtow(char *str)
{
	int i = 0, count = 0, j = 0;
	char **p;

	p = malloc(sizeof(*p) * (wordcnt(str)));

	if (p == NULL)
		return (NULL);

	for (; i < (wordcnt(str)); i++)
	{
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ' && str[j] != '\0')
		{
			count++;
			j++;
		}
		p[i] = malloc(sizeof(char) * (count + 1));
		count = 0;

		if (p[i] == NULL)
			return (NULL);
	}
	j = 0;
	for (i = 0; i < (wordcnt(str)); i++)
	{
		while (str[j] == ' ')
			j++;
		count = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			p[i][count] = str[j];
			count++;
			j++;
		}
		p[i][count] = '\0';
	}
	p[i] = NULL;
	return (p);
}
