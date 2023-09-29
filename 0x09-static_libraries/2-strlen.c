#include "main.h"

/**
 * _strlen - returns a string's length
 *
 * @s: expected string to be studied
 *
 * Return: the string's length
 *
 * Author: dz1dzor
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

