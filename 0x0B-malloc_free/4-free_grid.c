#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees the grid's allocated memory
 * @height: grid's height
 * @grid: grid expected to be freed
 * Author: dz1dzor
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index])
	}
	free(grid);
}

