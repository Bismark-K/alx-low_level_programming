#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out n elements of an array of integers
 *	followed by a new line!
 *
 * @a: expected array to print
 * @n: number of elements
 *
 * Author: dz1dzor
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
		if (t == 0)
			printf("%d", a[t]);
		else
			printf(", %d", a[t]);

	printf("\n");
}

