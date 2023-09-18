#include "main.h"

/**
 * print_rev - prints in reverse, a string followed by a new line
 *
 * @s: the string to be printed
 *
 * Author: dz1dzor
 */

void print_rev(char *s)
{
	int j, k, lng;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	lng = j;

	for (k = lng - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}

