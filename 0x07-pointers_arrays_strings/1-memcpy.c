#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area to another memory area
 * @n: number of bytes to be copied
 * @dest: memory area's destination
 * @src: memory area's source
 *
 * Return: dest's pointer
 *
 * Author: dz1dzor
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}

