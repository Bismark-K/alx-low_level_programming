#include "main.h"

/**
 * print_most_numbers - apart from 2 and 4, print 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 4 || n == 2)
		{
			continue;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}

