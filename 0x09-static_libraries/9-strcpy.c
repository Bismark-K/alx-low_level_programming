#include "main.h"

/**
 * *_strcpy - copies the string printed to by src,
 *	including the terminating null byte(\0), to
 *	the buffer pointed to by dest.
 *
 * @src: source of string
 * @dest: destination of string
 *
 * Return: the pointer to dest
 *
 * Author: dz1dzor
 */

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

