#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checkIfAllNum - Entry point
 * @str: Arguments counter
 * Return: Always 0 (Success)
 */

int checkIfAllNum(char *str)
{

	while (*str != '\0' && isdigit(*str) != 0)
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);

}

/**
 * main - Entry point
 * @argc: Arguments counter
 * @argv: Array with the name of the Arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);

	} else
	{

		int i = 1;
		int sum = 0;

		while (i < argc && checkIfAllNum(argv[i]) != 0)
		{
			sum += atoi(argv[i]);
			i++;
		}

		if (i < argc)
		{
			printf("Error\n");
			return (1);
		}

		printf("%d\n", sum);

	}

	return (0);
}
