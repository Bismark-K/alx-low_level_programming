#include "search_algos.h"

/**
  * _bin_srch - searches for a value in a sorted array of integers
  *			using binary search.
  * @array: the pointer to the first element of the array.
  * @lft: the beginning index of the [sub]array to search.
  * @rght: the ending index of the [sub]array to search.
  * @value: the value to search.
  * Return: -1, if the value is not present or the array is NULL.
  *         Otherwise, the index where the value is located.
  *
  * Author: Bismark-K
  */
int _bin_srch(int *array, size_t lft, size_t rght, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (rght >= lft)
	{
		printf("Searching in array: ");
		for (index = lft; index < rght; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = lft + (rght - lft) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			rght = index - 1;
		else
			lft = index + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array of integers
  *				using exponential search.
  * @array: the pointer to the first element of the array.
  * @size: the total number of elements in the array.
  * @value: the particular value to search for.
  * Return: -1, if the value is not present or the array is NULL.
  *         Otherwise, the index where the value is found.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, rght;

	index = 0;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value; index = index * 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	rght = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, rght);
	return (_bin_srch(array, index / 2, rght, value));
}
