#include "main.h"

/**
 * print_number - prints out an integer
 * @n: expected integer
 *
 * Author: dz1dzor
 */

void print_number(int n)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar('-');
		nbr = -n;
	}
	nbr_10 = nbr / 10;
	if (nbr_10 != 0)
	{
		print_number(nbr_10);
	}
	nbr_11 = (nbr % 10);
	_putchar(nbr_11 + '0');
}

