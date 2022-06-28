#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Checks for a func with 2-Dim arrays of int
 *
 * @width: width of the 2-dim array
 * @height: height of the 2-dim array
 *
 * Return: 0 if the with or height is -ve or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int y, z;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(width * sizeof(**grid));
		if (grid[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (z = 0; z < width; z++)
			grid[y][z] = 0;
	}
	return (grid);
}
