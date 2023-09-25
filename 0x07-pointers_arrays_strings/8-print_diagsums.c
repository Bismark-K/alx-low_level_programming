#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *			of a square matrix of integers.
 * @a: square matrix
 * @size: matrix's size
 */

void print_diagsums(int *a, int size)
{
	int index;
	unsigned int s, ss;

	s = 0;
	ss = 0;

	for (index = 0; index < size; index++)
	{
		s += a[index];
		ss += a[size - index - 1];
		a += size;
	}
	printf("%d, %d\n", s, ss);
}

