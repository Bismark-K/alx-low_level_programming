#include "main.h"

/**
 * clear_bit - sets a bit's value to 0 at a place
 * @index: position
 * @n: number
 *
 * Return: -1 or 1
 * Author: dz1dzor
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;

	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	mk = 1UL << index;
	mk = ~mk;
	*n = (*n) & mk;

	return (1);
}

