#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies string that has been given as a parameter
 * @str: the string to make a copy of
 * Return: NULL, if error and pointer to the string copied (Success)
 * Author: dz1dzor
 */

char *_strdup(char *str)
{
	char *cps;
	int index, length;

	index = 0;
	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	cps = malloc(sizeof(char) * (length + 1));

	if (cps == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		cps[index] = str[index];
		index++;
	}

	return (cps);
}

