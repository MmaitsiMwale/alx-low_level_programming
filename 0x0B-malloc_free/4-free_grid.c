#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int iter;

	for (iter = 0; iter < height; iter++)
		free(grid[iter]);
	free(grid);
}
