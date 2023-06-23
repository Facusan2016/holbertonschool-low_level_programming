#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to a String.
 * @needle: string to be found.
 * Return: a pointer to the first ocurrence.
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	char *iter = haystack;
	char *pivot;

	if (needle[0] == '\0')
		return (haystack);

	while (*iter != '\0')
	{
		j = 0;

		if (*iter == needle[j])
		{
			pivot = iter;

			while (*iter == needle[j] && needle[j] != '\0')
			{
				j++;
				iter++;
			}

			if (needle[j] == '\0')
				return (pivot);
		}

		iter++;
	}

	return (0);
}
