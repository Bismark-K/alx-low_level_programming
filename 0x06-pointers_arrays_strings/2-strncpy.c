#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @src: source string
 * @dest: resulting string
 * @n: bytes
 *
 * Return: dest
 *
 * Author: dz1dzor
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

