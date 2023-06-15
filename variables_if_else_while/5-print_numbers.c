#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char crt;

	for (crt = '0'; crt <= '9'; crt++)
	{
		putchar(crt);
	}
	putchar('\n');
	return (0);
}
