#include "search_algos.h"

/**
 * print_array - Prints an array.
 * @array: Array to be printed.
 * @lo: Interval lowest value.
 * @hi: Interval highest value.
 * Return: Nothing.
*/

void print_array(int *array, int lo, int hi)
{
	int i;

	printf("Searching in array: ");
	for (i = lo; i < hi; i++)
		printf("%i, ", array[i]);

	printf("%i\n", array[i]);
}


/**
 * binary_search - A function that implements a binary search
 * in an Array.
 * @array: Array to be searched on.
 * @size: Size of the array.
 * @value: Value that is searched.
 * Return: -1 if the value has not been found or the array is NULL.
 * the founded value otherwise.
*/

int binary_search(int *array, size_t size, int value)
{
	int mid, lo, hi;

	if (array == NULL)
		return (-1);


	lo = 0;
	hi = size - 1;
	print_array(array, lo, hi);

	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
		{
			lo = mid + 1;
			print_array(array, lo, hi);
		}
		else
		{
			hi = mid - 1;
			print_array(array, lo, hi);
		}
	}

	return (-1);
}
