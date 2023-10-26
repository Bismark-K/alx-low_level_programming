#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 or 0
 * Author: dz1dzor
 */
int get_endianness(void)
{
	unsigned char *b;
	unsigned int n;

	n = 1;
	b = (unsigned char *)&n;

	if (*b == 1)
		return (1);
	else
		return (0);
}

