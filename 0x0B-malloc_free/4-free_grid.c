#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory
 * @height: height of the grid
 * @grid: 2d grid
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
		free(grid[w]);
	free(grid);
}
