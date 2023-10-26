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
	unsigned long int mk, bit_n;

	mk = 1 << index;
	bit_n = n & mk;

	if (mk == bit_n)
		return (1);
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	else
		return (0);
}

