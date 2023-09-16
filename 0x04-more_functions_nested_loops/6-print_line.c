#include "main.h"

/**
 * print_line - print a line that's straight
 *
 * @n: is the count of times the character should be printed.
 */

void print_line(int n)
{
	int ln_ch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln_ch = 1; ln_ch <= n; ln_ch++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

