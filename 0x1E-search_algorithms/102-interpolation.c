#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array of integers
  *				using interpolation search.
  * @array: the pointer to the first element of the array to search.
  * @size: total number of elements in the array.
  * @value: the value to search.
  *
  * Return: -1, if the value is not present or the array is NULL.
  *         Otherwise, the index where the value was found.
  * Author: Bismark-K
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	/* check to see if the array is NULL */
	if (array == NULL)
		return (-1);

	/* interpolation begins here */
	for (left = 0, right = size - 1; right >= left;)
	{
		index = left + ((double)(right - left) / (array[right] -
				       array[left]) * (value - array[left]));
		if (index < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}
