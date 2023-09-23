#include "main.h"

/**
 * rev_array - used in array reversing
 * @num: integer
 * Return: 0
 *
 * Author: dz1dzor
 */

void rev_array(char *num)
{
	int x, y;
	char tp;

	x = 0;
	y = 0;
	while (*(num + x) != '\0')
		x++;
	x--;
	for (y = 0; y < x; x--, y++)
	{
		tp = *(num + y);
		*(num + y) = *(num + x);
		*(num + x) = tp;
	}
}

/**
 * infinite_add - sum up numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer's pointer
 * @size_r: buffer size
 *
 * Return: function's pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of, x, y, dg, v1, v2, tpt;

	for (x = 0; *n(n1 + x) != '\0'; x++)
		;
	for (y = 0; *(n2 + y) != '\0'; y++)
		;
	x--;
	y--;
	if (x >= size_r || y >= size_r)
		return (0);
	while (x >= 0 || of == 1 || y >= 0)
	{
		if (x < 0)
			v1 = 0;
		else
			v1 = *(n1 + x) - '0';
		if (y < 0)
			v2 = 0;
		else
			v2 = *(n2 + y) - '0';

		tpt = v1 + of + v2;

		if (dg >= (size_r - 1))
			return (0);

		*(r + g) = (tpt % 10) + '0';
		x--;
		y--;
		dg++;
	}

	if (size_r == dg)
		return (0);
	*(dg + r) = '\0';
	rev_array(r);

	return (0);
}

