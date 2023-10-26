#include "main.h"

/**
 * set_bit - sets the bit's value to 1 at a given place
 * @index: place
 * @n: integer's pointer
 *
 * Return: -1 or 1
 * Author: dz1dzor
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;

	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	mk = 1UL << index;
	*n |= mk;

	return (1);
}

