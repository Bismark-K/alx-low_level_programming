#include "variadic_functions.h"

/**
 * print_all - prints out anything
 * @format: a record of the arguments that are passed to the function
 *
 * Author: dz1dzor
 */
void print_all(const char * const format, ...)
{
	char *s;
	int srch, id = 0;

	va_list(rcd);
	va_start(rcd, format);
	while (format[id] != '\0' && format)
	{
		switch (format[id])
		{
			case 'c':
				printf("%c", va_arg(rcd, int));
				srch = 0;
				break;
			case 'f':
				printf("%f", va_arg(rcd, double));
				srch = 0;
				break;
			case 's':
				s = va_arg(rcd, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				srch = 0;
				break;
			case 'i':
				printf("%i", va_arg(rcd, int));
				srch = 0;
				break;
			default:
				srch = 1;
				break;
		}
		if (format[id + 1] != '\0' && srch == 0)
			printf(", ");
		id++;
	}
	putchar('\n');
	va_end(rcd);
}

