#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: string to revers
 *
 * Author: dz1dzor
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}

