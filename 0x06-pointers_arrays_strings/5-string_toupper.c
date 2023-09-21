#include "main.h"

/**
 * string_toupper - make all lowercase uppercase
 * @c: pointer
 * Return: c
 *
 * Author: dz1dzor
 */

char *string_toupper(char *c)
{
	int x = 0;
	/*char *c;*/

	while (c[x] != '\0')
	{
		if (c[x] <= 'z' && c[x] >= 'a')
		{
			c[x] = c[x] - 32;
		}
		x++;
	}
	return (c);
}

