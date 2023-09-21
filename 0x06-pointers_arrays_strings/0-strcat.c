#include "main.h"

/**
 * _strcat - function for concatenating two strings
 *
 * @dest: resulting string
 * @src: source string
 *
 * Return: a pointer to the dest
 *
 * Author: dz1dzor
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}

	return (dest);
}

