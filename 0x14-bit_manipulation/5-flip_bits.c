#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @m: int
 * @n: int
 *
 * Return: counts of bits
 * Author: dz1dzor
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total_num;
	unsigned long int r_xor;

	r_xor = n ^ m;
	total_num = 0;
	while (r_xor > 0)
	{
		total_num = total_num + (r_xor & 1);
		r_xor = r_xor >> 1;
	}

	return (total_num);
}

