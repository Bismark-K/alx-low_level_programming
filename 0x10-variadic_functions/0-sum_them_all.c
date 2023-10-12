#include "variadic_functions.h"

/**
 * sum_them_all - finds the sum of all its parameters
 * @n: the count of arguments passed to sum_them_all
 *
 * Return: the result
 *
 * Author: dz1dzor
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int ui;
	va_list rcd;

	if (n == 0)
		return (0);

	/* initialize the list or the argument from start */
	va_start(rcd, n);

	/* repeat through the parameters */
	for (ui = 0; ui < n; ui++)
		sum += va_arg(rcd, int);

	/* pristining up */
	va_end(rcd);

	return (sum);
}

