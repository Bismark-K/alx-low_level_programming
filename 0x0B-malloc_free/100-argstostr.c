#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @av: array's pointer of size ac
 * @ac: count of argument
 * Return: NULL if av == NULL or ac == 0
 * Author: dz1dzor
 */

char *argstostr(int ac, char **av)
{
	int ag, sb, index, sz;
	char *st;

	sz = ac;
	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (ag = 0; ag < ac; ag++)
	{
		for (sb = 0; av[ag][sb]; sb++)
		{
			sz++;
		}
	}

	st = malloc(sizeof(char) * sz + 1);

	if (st == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (ag = 0; ag < ac; ag++)
	{
		for (sb = 0; av[ag][sb]; sb++)
		{
			st[index++] = av[ag][sb];
		}

		st[index++] = '\n';
	}

	st[sz] = '\0';

	return (st);
}

