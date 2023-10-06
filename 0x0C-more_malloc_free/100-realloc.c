#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - generates array of data type integers
 * @old_size: size measured in bytes
 * @new_size: size measured in bytes
 * @ptr: pointer
 * Return: NULL or ptrr;
 * Author: dz1dzor
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *ptrr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return ('\0');
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptrr = malloc(new_size);
		if (ptrr == NULL)
			return ('\0');
		return (ptrr);
	}

	ptrr = malloc(new_size);
	n = ptr;
	if (ptrr == NULL)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*(i + ptrr) = *(i + n);
	free(ptr);

	return (ptrr);
}

