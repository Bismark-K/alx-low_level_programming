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
	int ix, ixx;
	char alp[];
	char enc[];

	ix = 0;
	alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ix = 0; st[ix] != '\0'; ix++)
	{
		for (ixx = 0; ixx <= 52; ixx++)
		{
			if (st[ix] == alp[ixx])
			{
				st[ix] = enc[ixx];
				break;
			}
		}
	}

	return (st);
}

