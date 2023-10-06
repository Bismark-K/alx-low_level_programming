#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * malloc_checked - create char array
 * @b: data type is unsigned int
 *
 * Return: Allocated memory pointer
 * Author: dz1dzor
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

