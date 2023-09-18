#include "main.h"

/**
 * puts2 - prints out every other character of a string
 *
 * @str: where the characters to be printed are gotten from
 *
 * Author: dz1dzor
 */

void puts2(char *str)
{
	int i, lngth;

	lngth = 0;

	while (str[lngth] != '\0')
	{
		lngth++;
	}

	for (i = 0; i < lngth; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

