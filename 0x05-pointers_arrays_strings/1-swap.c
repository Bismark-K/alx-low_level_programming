#include "main.h"

/**
 * swap_int - swaps the two integers' values
 *
 * @a: first value's pointer
 * @b: second value's pointer
 *
 * Author: dz1dzor
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

