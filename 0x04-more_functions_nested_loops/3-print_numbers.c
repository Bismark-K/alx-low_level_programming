#include "main.h"

/**
 * print_numbers - print outs 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');

	return (0);
}

