#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argslen - Concatenates all the arguments of your program.
 * @ac: Amount of arguments.
 * @av: Arrasy containing the arguments.
 * Return: String.
 */

int argslen(int ac, char **av)
{
	int i = 1;
	unsigned int tlen = 0;

	while (i < ac)
	{
		tlen += strlen(av[i]);
		i++;
	}

	return (tlen);
}

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Amount of arguments.
 * @av: Arrasy containing the arguments.
 * Return: String.
 */

char *argstostr(int ac, char **av)
{
	int i, j;

	int tcor = 0;
	int tlen;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	tlen = argslen(ac, av);

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
