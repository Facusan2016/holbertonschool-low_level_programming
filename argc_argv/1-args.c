#include <stdio.h>
/**
 * main - Entry point
 * @argc: Arguments counter
 * @argv: Array with the name of the Arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
