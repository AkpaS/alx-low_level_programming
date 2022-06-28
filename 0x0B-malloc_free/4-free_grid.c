#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A func that frees a 2-dim grid
 *
 * @grid: the grid of the array
 * @height: the height of the array
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
