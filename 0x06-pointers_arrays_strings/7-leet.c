#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @c: variable
 *
 * Return: value of c
 *
 * Author: dz1dzor
 */

char *leet(char *c)
{
	int n, m;

	char s2[] = "lLtToOeEaA";
	char s1[] = "1177003344";

	for (n = 0; c[n] != '\0'; n++)
	{
		for (m = 0; m < (9 + 1); m++)
		{
			if (c[n] == s2[m])
			{
				c[n] = s1[m];
			}
		}
	}
	return (c);
}

