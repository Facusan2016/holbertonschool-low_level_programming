#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Free the memory of a two dimensional array.
 * @grid: Grid to free memory to.
 * @height: Height of the array.
 * Return: Pointer to the new String.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		int i = height - 1;

		for (; i >= 0; i--)
			free(grid[i]);

		free(grid);

	}
}
