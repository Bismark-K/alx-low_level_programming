#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                     of a square matrix of integers.
 * @a: square matrix
 * @size: matrix's size
 */

void print_diagsums(int *a, int size)
{
	int index, s, s1;

	s = 0;
	s1 = 0;

	for (index = 0; index < (size^2); index++)
	{
		if (index % (size + 1) == 0)
		{
			s = s + a[index];
		}
		if (index != 0 && index % (size - 1) == 0 && index < (size^2) - 1)
		{
			s1 = s1 + a[index];
		}
	}
	printf("%d, %d\n", s, s1);
}

