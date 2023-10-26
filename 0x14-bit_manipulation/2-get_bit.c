#include "main.h"

/**
 * get_bit - returns the bit's value at a given index
 * @n: number
 * @index: position
 *
 * Return: 1, -1 or 0
 * Author: dz1dzor
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mk;
	unsigned long int bit_n;

	mk = 1UL << index;
	bit_n = sizeof(unsigned long int) * 8;

	if (n & mk)
		return (1);
	if (index >= bit_n)
		return (-1);
	else
		return (0);
}

