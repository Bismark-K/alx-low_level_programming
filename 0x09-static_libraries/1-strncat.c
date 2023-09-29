#include "main.h"

/**
 * _strncat - using at least n bytes from src, concatenates strings
 *
 * @src: source string
 * @dest: resulting string
 * @n: bytes from src
 * Return: dest
 *
 * Author: dz1dzor
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0' /*&& y < n*/)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}

