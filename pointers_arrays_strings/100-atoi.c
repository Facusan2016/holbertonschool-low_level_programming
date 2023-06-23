#include "main.h"
/**
 * _atoi - A function that converts a string to an integer
 * @s: Pointer to a string
 * Return: A number.
 */

int _atoi(char *s)
{
	int atoiNum = 0;

	int iter = 0;

	int sign = 1;

	while (s[iter] != '\0')
	{
		if (s[iter] == '-')
			sign *= -1;

		while (s[iter] >= '0' && s[iter] <= '9')
		{
			atoiNum = (atoiNum * 10 + (s[iter] - 48));
			if (!(s[iter + 1] >= '0' && s[iter + 1] <= '9'))
				break;
				break;
			iter++;
		}

		iter++;

	}

	return (atoiNum * sign);

}
