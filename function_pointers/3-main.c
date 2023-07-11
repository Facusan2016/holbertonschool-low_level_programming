#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Main Function
 * @argc: Amount of arguments.
 * @argv: Vector of arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error1\n");
		exit(98);

	} else if (get_op_func(argv[2]) == NULL)
	{
		printf("Error2\n");
		exit(99);

	} else if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error3\n");
		exit(100);
	} else
	{
		return ((get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	}

	return (0);
}
