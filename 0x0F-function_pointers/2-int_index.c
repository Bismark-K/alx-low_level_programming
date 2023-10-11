#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: a pointer to an array with data type int
 * @size: the size of the array
 * @cmp: this is the pointer to the function we want to compare
 *
 * Return: -1 if no match is found or has negative size, index of the
 *	element when the cmp function does not return 0
 *
 * Author: dz1dzor
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL || size < 1)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(*(array + index)))
			return (index);
	}

	return (-1);
}

