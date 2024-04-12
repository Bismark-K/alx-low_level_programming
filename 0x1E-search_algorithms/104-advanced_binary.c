#include "search_algos.h"

/**
  * rcsv_advncd_bin - searches recursively for a value in a sorted
  *			array of integers using binary search.
  * @array: the pointer to the first element of the [sub]array.
  * @l: starting index of the [sub]array.
  * @r: ending index of the [sub]array.
  * @value: the value to search for.
  *
  * Return: -1, if the value is not present.
  *         Otherwise, the index where the value is located.
  * Author: Bismark-K
  */
int rcsv_advncd_bin(int *array, size_t l, size_t r, int value)
{
	size_t index;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (index = l; index < r; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);

	index = l + (r - l) / 2;
	if (array[index] == value && (index == l || array[index - 1] != value))
		return (index);
	if (array[index] >= value)
		return (rcsv_advncd_bin(array, l, index, value));
	return (rcsv_advncd_bin(array, index + 1, r, value));
}

/**
  * advanced_binary - searches for a value in a sorted array of integers using
  *			advanced binary search.
  * @array: the pointer to the first element of the array.
  * @size: the total number of elements in the array.
  * @value: the value to search.
  *
  * Return: -1, if the value is not present or the array is NULL.
  *         Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (rcsv_advncd_bin(array, 0, size - 1, value));
}
