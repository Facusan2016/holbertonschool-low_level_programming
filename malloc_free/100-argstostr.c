#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Amount of arguments.
 * @av: Arrasy containing the arguments.
 * Return: String.
 */

char *argstostr(int ac, char **av)
{
	int i, j;

	int tlen, tcor = 0;

	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		tlen += strlen(av[i]);

	p = malloc(sizeof(char) * (tlen + (ac - 1)));

	if (p == NULL)
		return (NULL);

	tcor = 1;
	j = 0;

	for (i = 0; i < (tlen + (ac - 1)) && av[tcor] != NULL; i++)
	{

		if (av[tcor][j] != '\0' && tcor < ac)
		{
			p[i] = av[tcor][j];
			j++;

		} else
		{
			p[i] = '\n';
			tcor++;
			j = 0;

		}
	}

	p[i] = '\0';
	return (p);
}
