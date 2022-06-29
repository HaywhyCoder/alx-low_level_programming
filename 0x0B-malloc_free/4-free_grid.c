#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees the memory allocated to a 2D array
 *@grid: pointer to the previously created grid
 *@height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = (height - 1); i >= 0; i--)
		free(grid[i]);
	free(grid);
}
