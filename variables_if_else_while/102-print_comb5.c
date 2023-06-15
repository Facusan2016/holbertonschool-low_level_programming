#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = (num1 + 1); num2 <= 99; num2++)
		{
			putchar(48 + (num1 / 10));
			putchar(48 + (num1 % 10));
			putchar(32);
			putchar(48 + (num2 / 10));
			putchar(48 + (num2 % 10));

			if (num1 != 98 || num2 != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
