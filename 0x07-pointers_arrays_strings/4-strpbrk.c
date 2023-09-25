#include "main.h"

/**
 * _strpbrk - function locates the first occurence in the string, s
 *		of any bytes in the string, accept
 *
 * @s: string to search in
 * @accept: string with the bytes to locate
 *
 * Return: pointer to the bytes located in @s or NULL when
 *		the bytes isn't found
 *
 * Author: dz1dzor
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *s != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}


