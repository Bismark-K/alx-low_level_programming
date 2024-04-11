#include "search_algos.h"


/**
 * recursive_srch - function to do the searching
 * @array: pointer to the first element of the array to search in
 * @size: the size of the area
 * @value: the value to search for
 * Return: the index
 */
int recursive_srch(int *array, size_t size, int value)
{
	size_t i, rem = size / 2;

	if (size == 0 || array == NULL)
		return (-1);

	/* Print the array been searched now */
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	/* start search */
	if (size % 2 == 0 && rem)
		rem--;

	if (array[rem] == value)
		return ((int)rem);

	if (array[rem] > value)
		return (recursive_srch(array, rem, value));

	rem++;

	return (recursive_srch(array + rem, size - rem, value) + rem);
}


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: total elements in the array
 * @value: the element to search for
 * Return: the index of the found value, -1 if array is NULL or
 *	value isn't found
 * Author: Bismark-K
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	/** get the index **/
	i = recursive_srch(array, size, value);

	/* if the value isn't found */
	if (array[i] != value && i >= 0)
		return (-1);

	return (i);
}

