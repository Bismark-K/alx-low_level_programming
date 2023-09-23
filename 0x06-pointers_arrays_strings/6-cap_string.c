#include "main.h"

/**
 * cap_string - capitalize the first letter of each word
 *
 * @st: the string expected to capitalize
 *
 * Return: st
 *
 * Author: dz1dzor
 */

char *cap_string(char *st)
{
	int idx = 0;

	while (st[idx])
	{
		while (!(st[idx] <= 'z' && st[idx] >= 'a'))
		{
			idx++;
		}
		if (st[idx - 1] == ' ' || st[idx - 1] == '(' || st[idx - 1] == ')' ||
		st[idx - 1] == '{' || st[idx - 1] == '}' || st[idx - 1] == ',' ||
		st[idx - 1] == '.' || st[idx - 1] == '!' || st[idx - 1] == ';' ||
		st[idx - 1] == '\n' || st[idx - 1] == '\t')
		{
			st[idx] -= 32;
		}
		idx++;
	}

	return (st);
}

