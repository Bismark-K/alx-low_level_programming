#include "main.h"

/**
 * _strstr - function to locate a substring
 *
 * @haystack: string to do the searching in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 *
 * Author: dz1dzor
 */

char *_strstr(char *haystack, char *needle)
{
	int index, index2;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (index2; needle[index2] != '\0'; index2++)
		{
			if (haystack[index + index2] != needle[index2]0
			{
				break;
			}
		}
		if (!needle[index2])
		{
			return (&haystack);
		}
	}

	return ('\0');
}

