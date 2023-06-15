#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 48; dig1 <= 57; dig1++)
	{
		for (dig2 = 48; dig2 <= 57; dig2++)
		{
			if (dig1 < dig2)
			{
				putchar(dig1);
				putchar(dig2);

				if (dig1 != 56 || dig2 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
