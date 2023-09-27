#include "main.h"

/**
 * _strlen_recursion - this function returns the string's length
 * @s: string to find the length of
 * Return: string's length
 *
 * Author: dz1dzor
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

