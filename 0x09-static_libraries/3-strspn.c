#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: string to consider
 * @accept: strings in which to look for the prefix
 *
 * Return: the number of bytes contained in the initial segment
 * AUthor: dz1dzor
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, y, fl;

	y = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		fl = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				y++;
				fl = 1;
			}
		}
		if (fl == 0)
			return (y);
	}

	return (i);
}

