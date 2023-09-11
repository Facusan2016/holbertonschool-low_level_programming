#include "search_algos.h"

/**
 * linear_search - A function that implements a linear search
 * in an Array.
 * @array: Array to be searched on.
 * @size: Size of the array.
 * @value: Value that is searched.
 * Return: -1 if the array is NULL or the value has not been found.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	if (array == NULL)
		return (-1);

	while (iter < size)
	{
		printf("Value checked array[%li] = [%i]\n", iter, array[iter]);

		if (array[iter] == value)
			break;

		iter++;
	}

	if (iter == size)
		return (-1);

	return (iter);
}
