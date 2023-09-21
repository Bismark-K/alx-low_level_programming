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
	int i = 0;
	char s_1;

	s_1 =  st[i] - 1;
	while (st[i])
	{
		while (!(st[i] <= 'z' && st[i] >= 'a'))
		{
			i++;
		}
		/*if (s_1 == ' ' || s_1 == '(' || s_1 == ')' || s_1 == '{'
		s_1 == '}' || s_1 == ',' || s_1 == '.' || s_1 == '!'
		s_1 == ';' || s_1 == '\n' || s_1 == '\t')*/
		if (st[i - 1] == ' ' || st[i - 1] == '(' || st[i - 1] == ')' ||
		st[i - 1] == '{' || st[i - 1] == '}' || st[i - 1] == ',' ||
		st[i - 1] == '.' || st[i - 1] == '!' || st[i - 1] == ';' ||
		st[i - 1] == '\n' || st[i - 1] == '\t')
		{
			st[i] -= 32;
		}
		i++;
	}
	
	return (st);
}

