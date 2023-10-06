#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory, using malloc, for an array
 * @size: size of elements
 * @nmemb: data type
 *
 * Return: NULL
 * Author: dz1dzor
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *st;
	void *ptr = '\0';

	if (size <= 0 || nmemb <= 0)
		return (ptr);

	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return ('\0');

	st = (char *)ptr;
	for (i = 0; i < (size * nmemb); i++)
		*(st + i) = 0;

	return (st);
}

