#include "main.h"

/**
 * print_diagonal - print a nice diagonal line
 *
 * @n: is the wanted number of the \ character
*/

void print_diagonal(int n)
{
	int pn, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pn = 1; pn <= n; ++pn)
		{
			for (spc = 1; spc <= pn; ++spc)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

