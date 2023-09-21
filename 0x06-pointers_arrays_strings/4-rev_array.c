#include "main.h"

/**
 * reverse_array - reverse integers array
 *
 * @a: array
 * @n: no. of elements in the array
 *
 * Return: void
 *
 * Author: dz1dzor
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

