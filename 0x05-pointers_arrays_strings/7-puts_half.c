#include "main.h"

/**
 * puts_half - prints half of a string and the second half of the string
 *	if the number of characters is odd, the function should print the last
 *	 n characters of the string, where n = (length_of_the_string - 1) / 2.
 *
 * @str: string whose half is to be printed
 *
 * Author: dz1dzor
 */

void puts_half(char *str)
{
	int i, lnt;

	for (lnt = 0; str[lnt] != '\0'; lnt++)
	{
		;
	}

	if (lnt % 2 == 0)
	{
		for (i = lnt / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((lnt - 1) / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

