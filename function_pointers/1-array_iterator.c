#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Write a function that executes a function on each array pm.
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Function to be applied.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
