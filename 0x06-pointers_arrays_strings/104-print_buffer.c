#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints out a lot of buffer
 * @b: buffer
 * @size: proportion
 *
 * Return: void
 *
 * Author: dz1dzor
 */

void print_buffer(char *b, int size)
{
	int m, n;
	int p = 0;

	while (size <= 0)
	{
		putchar('\n');
		return;
	}
	while (p < size)
	{
		m = size - p < 10 ? size - p : 10;
		printf("%8x: ", p);

		for (n = 0; n < 10; n++)
		{
			if (n < m)
			{
				printf("%2x", *(b + p + n));
			}
			else
				putchar(' ');
			if (n % 2)
				putchar(' ');
		}
		for (n = 0; n < m; n++)
		{
			int i = *(b + n + p);

			if (i > 132 || i < 32)
				c = '.';
			putchar(c);
		}
		putchar('\n');
		p = p + 10;
	}
}

