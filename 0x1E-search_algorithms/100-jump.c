#include "search_algos.h"

/**
  * jump_search - searches in a sorted array of integers, a value using
  *			jump search.
  * @array: the pointer to the first element of the array.
  * @size: total number of elements in the array.
  * @value: the value to search.
  * Return: -1, if the value is not present or the array is NULL.
  *         Otherwise, index of the located value.
  * Author: Bismark-K
  */
int jump_search(int *array, size_t size, int value)
{
	size_t index;
	size_t jmp, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (index = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		index = jmp;
		jmp += stp;
	}

	/* printing where the value was found */
	printf("Value found between indexes [%ld] and [%ld]\n", index, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; index < jmp && array[index] < value; index++)
	{
		printf("Value checked array[%ld]", index);
		printf(" = [%d]\n", array[index]);
	}
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
