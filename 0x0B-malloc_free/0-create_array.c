#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: array's size to create
 * @c: the data type, char to initialize array
 * Return: NULL, if error and pointer to the array
 *	if success
 * Author: dz1dzor
 */

char *create_array(unsigned int size, char c)
{
	char *cptr;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	cptr = malloc(sizeof(char) * size);

	if (cptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		cptr[index] = c;
	}

	return (cptr);
}

