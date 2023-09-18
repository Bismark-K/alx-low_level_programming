#include "main.h"

/**
 * rev_string - the function to reverse a string
 *
 * @s: the string expected to be reversed
 *
 * Author: dz1dzor
 */

void rev_string(char *s)
{
	int i, lngt, lngth;
	char exp;

	lngt = 0;
	lngth = 0;

	while (s[lngt] != '\0')
	{
		lngt++;
	}

	lngth = lngt - 1;

	for (i = 0; i < lngt / 2; i++)
	{
		exp = s[i];
		s[i] = s[lngth];
		s[lngth--] = exp;
	}
}

