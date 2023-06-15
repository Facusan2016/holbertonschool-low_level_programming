#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 48; dig1 <= 57; dig1++)
	{
		for (dig2 = 48; dig2 <= 57; dig2++)
		{
			for (dig3 = 48; dig3 <= 57; dig3++)
			{
				if (dig1 < dig2 && dig2 < dig3)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);

					if (dig1 != 55 || dig2 != 56 || dig3 != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
