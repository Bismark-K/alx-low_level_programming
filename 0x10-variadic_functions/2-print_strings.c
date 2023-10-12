#include "variadic_functions.h"

/**
 * print_strings - this function prints out strings
 * @n: counts of arguments
 * @separator: between strings, the separator
 *
 * Author: dz1dzor
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int ui = 0;
	va_list rcd;

	va_start(rcd, n);

	while (ui < n)
	{
		s = va_arg(rcd, char *);
		if (separator == NULL)
			printf("%s", s);
		if (s == NULL)
			s = "(nil)";
		else if (ui == 0 && separator)
			printf("%s", s);

		else
			printf("%s%s", separator, s);

		ui++;
	}

	putchar('\n');

	va_end(rcd);
}

