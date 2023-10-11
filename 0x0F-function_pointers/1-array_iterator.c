#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given as a parameter
 * @action: this is the pointer that points to the function you use
 * @array: this refers to the array
 * @size: this refers to the array's size
 *
 * Author: dz1dzor
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (action == NULL || array == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}

