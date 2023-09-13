#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int pr, mu, num;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (mu = 1; mu <= n; ++mu)
			{
				_putchar(',');
				_putchar(' ');

				pr = num * mu;

				if (pr <= 9)
					_putchar(' ');
				if (pr <= 99)
					_putchar(' ');

				if (pr >= 100)
				{
					_putchar((pr / 100) + 48);
					_putchar((pr / 10) % 10 + 48);
				}
				else if (pr <= 99 && pr >= 10)
					_putchar((pr / 10) + 48);
					_putchar((pr % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
