#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int n, r, co;

	for (r = 1; r <= 10; r++)
	{
		for (co = 0; co <= 14; co++)
		{
			n = co;
			if (co > 9)
			{
				_putchar(1 + 48);
				n = co % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}

	return (0);
}

