#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory requested on **alloc_grid functon
 * @grid: **alloc_grid function 2D array
 * @height: number of raws of the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
