#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string to search from
 * @c: target character
 *
 * Return: NULL, if the character is not found or a pointer to the
 *	first occurence of c in s
 *
 * Author: dz1dzor
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	/* When character isn't located, return null */
	return ('\0');
}

