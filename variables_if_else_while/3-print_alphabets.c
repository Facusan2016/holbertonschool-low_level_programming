#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	j = 65;
	while (j <= 90 && j != 37)
	{
		if (j == 90)
		{
			j = 36;
		}
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
