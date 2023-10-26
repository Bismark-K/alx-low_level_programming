#include "main.h"

/**
 * binary_to_uint - converts a number from binary to unsigned int
 * @b: string containing binary
 *
 * Return: result
 * Author: dz1dzor
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int rst;

	rst = 0;
	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '0')
			rst = rst << 1;
		else if (b[index] == '1')
			rst = (rst << 1) | 1;
		else
			return (0);
	}

	return (rst);
}

