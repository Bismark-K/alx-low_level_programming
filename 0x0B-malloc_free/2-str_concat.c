#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates 2 strings
 * @s1: expected string to concatenate
 * @s2: the second string to concatenate
 * Return: NULL, if error and pointer to new string if success
 * Author: dz1dzor
 */

char *str_concat(char *s1, char *s2)
{
	int index, index2, x, y;
	char *ns;

	x = 0, y = 0;
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s2[y] != '\0')
		y++;

	while (s1[x] != '\0')
		x++;

	ns = malloc((x * sizeof(char)) + ((y + 1) * sizeof(char)));

	if (ns == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		ns[index] = s1[index];

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		ns[index] = s2[index2];
		index++;
	}
	ns[index] = '\0';
	return (ns);
}

