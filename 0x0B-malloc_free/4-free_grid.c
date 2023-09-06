#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - prog that frees a 2d grid
 * @grid: 2 dimensional grid
 * @height: height dim. of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
