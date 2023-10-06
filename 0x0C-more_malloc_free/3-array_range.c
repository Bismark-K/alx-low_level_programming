#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that makes an array of integers
 * @max: maximum size
 * @min: minimum size
 * Return: if min > max or malloc fails, return NULL
 * Author: dz1dzor
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return ('\0');

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return ('\0');

	for (i = 0; min <= max; min++, i++)
		*(i + ptr) = min;

	return (ptr);
}

