#include "main.h"

/**
 * _strcmp - compare the value of strings
 *
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: 0
 *
 * Author: dz1dzor
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s2[n] != s1[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}

