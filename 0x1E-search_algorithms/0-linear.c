#include <stdio.h>
#include "search_algos.h"

/**
 * main - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: 0 if successful, -1 if value isn't present or array is NULL
 * Author: Bismark-K
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* searching for the value */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
			return (i);
	}

	/* if value not found */
	return (-1);
}
