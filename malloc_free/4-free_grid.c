#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2 dimensional array set before in "3-alloc_grid.c"
 * @grid: the array to be free
 * @height: the size of the array to be free
 *
 * Return: the entire array already free
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
