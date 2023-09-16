#include "main.h"

/**
 * print_number - prints out an integer.
 *
 * @n: expected integer.
*/

void print_number(int n)
{
	unsigned int number = n;

	/*checks to see if it is negative*/
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	/*print out the starting digits*/
	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}

	/*print out the digits that come last*/
	_putchar((number % 10) + 48);
}

