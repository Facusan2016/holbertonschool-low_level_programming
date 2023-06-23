#include "main.h"
/**
 * cap_string - Change all lowercase letters to uppercase.
 * @c: a pointer to a char.
 * Return: a char.
 */

char *cap_string(char *c)
{
	char q[] = ",;.!?(){}\n\t\" ";
	int cnt1, cnt2;

	if (c[0] != '\0' && c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	for (cnt1 = 0; c[cnt1] != '\0'; cnt1++)
	{
		if (!(c[cnt1] >= 'a' && c[cnt1] <= 'z'))
		{
			cnt2 = 0;

			while (c[cnt1] != q[cnt2] && q[cnt2] != '\0')
				cnt2++;

			if (q[cnt2] != '\0' && c[cnt1 - 2] != '\0')
			{
				if (c[cnt1 + 1] >= 'a' && c[cnt1 + 1] <= 'z')
					c[cnt1 + 1] = c[cnt1 + 1] - 32;
			}
		}
	}

	return (c);

}
