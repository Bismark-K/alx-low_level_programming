#include "main.h"

/**
 * rot13 - using rot13, encode strings
 * @st: expected string to be encoded
 *
 * Return: encoded string's pointer
 *
 * Author: dz1dzor
 */

char *rot13(char *st)
{
	int x, y;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijlm";

	for (x = 0; st[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (st[x] == alp[y])
			{
				st[x] = enc[y];
				break;
			}
		}
	}

	return (st);
}

