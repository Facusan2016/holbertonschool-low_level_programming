
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;
	printf("Last digit of %d is %d and is ", n, lastdgt);

	if (lastdgt > 5)
	{

		printf("greater than 5");
	}
	else if (lastdgt == 0)
	{
		printf("0");
	}
	else if (lastdgt < 6 && lastdgt != 0)
	{
		printf("less than 6 and not 0");
	}

	printf("\n");
	return (0);
}
