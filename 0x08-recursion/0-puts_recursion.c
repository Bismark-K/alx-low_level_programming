#include "main.h"

/**
 * _puts_recursion - Before a new line, the function prints a string
 * @s: expected string to be printed
 *
 * Author: dz1dzor
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

