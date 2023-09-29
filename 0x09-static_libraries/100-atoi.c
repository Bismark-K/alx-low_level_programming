#include "main.h"

/**
 * _atoi - converts a string into an integer
 *
 * @s: string to be converted
 *
 * Return: the converted int
 *
 * Author: dz1dzor
 */

int _atoi(char *s)
{
	unsigned int ui = 0;
	int si = 1;

	do {
		if (*s == '-')
		{
			si *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			ui = (ui * 10) + (*s - '0');
		}
		else if (ui > 0)
		{
			break;
		}
	} while (*s++);

	return (ui * si);
}

