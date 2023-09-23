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
	alp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	enc[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'l', 'm'};

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

