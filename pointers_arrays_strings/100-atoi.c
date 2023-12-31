#include "main.h"
/**
 * _atoi - A function that converts a string to an integer
 * @s: Pointer to a string
 * Return: A number.
 */

int _atoi(char *s)
{
	int atoiNum = 0;

	unsigned int devol = 0;

	int iter = 0;

	int sign = 1;

	int flag = 0;

	while (s[iter] != '\0' && flag == 0)
	{
		if (s[iter] == '-')
			sign *= -1;

		while (s[iter] >= '0' && s[iter] <= '9' && flag == 0)
		{
			devol = (devol * 10 + (s[iter] - 48));
			if (!(s[iter + 1] >= '0' && s[iter + 1] <= '9'))
				flag = 1;
			iter++;
		}

		iter++;

	}

	atoiNum = devol * sign;

	return (atoiNum);

}
