#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @n: number of bytes
 * @b: constant byte
 * @s: pointer to the memory area
 *
 * Return: s
 *
 * Author: dz1dzor
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}

