#include "main.h"

/**
 * _puts - prints out a string to the screen
 *
 * @str: the string's pointer
 *
 * Author: dz1dzor
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putcar('\n');
}

