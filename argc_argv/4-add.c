#include <stdio.h>
#include <stdlib.h>
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

		while (i < argc && atoi(argv[i]) != 0)
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
