#include "variadic_functions.h"

/**
 * print_numbers - this function prints numbers that were given as parameters
 * @n: number of integers
 * @separator: the string that is to be printed between the numbers
 *
 * Return: Nothing
 *
 * Author: dz1dzor
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ui;
	va_list rcd;

	va_start(rcd, n);

	ui = 0;
	while (ui < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(rcd, int));
		else if (ui == 0 && separator)
			printf("%d", va_arg(rcd, int));
		else
			printf("%s%d", separator, va_arg(rcd, int));

		ui++;
	}

	va_end(rcd);

	putchar('\n');
}

