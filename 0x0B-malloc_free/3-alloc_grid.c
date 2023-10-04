#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2D array of data type, int
 * @height: matrix's height
 * @width: matrix's width
 * Return: NULL, if error and pointer to the new matrix for success
 * Author: dz1dzor
 */

int **alloc_grid(int width, int height)
{
	int index, index2, **grd;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		grd[index] = malloc(sizeof(int) * width);
		if (grd[index] == NULL)
		{
			while (index >= 0)
			{
				free(grd[index]);
				index--;
			}
			free(grd);
			return (NULL);
		}
		for (index2 = 0; index2 < width; index2++)
		{
			grd[index][index2] = 0;
		}
	}

	return (grd);
}

