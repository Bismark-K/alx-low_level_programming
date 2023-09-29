#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to a program that gives the products
 *	of two arguments given to it.
 * @argv: arguments array's pointer
 * @argc: arguments' place
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(int argc, char *argv[])
{
	int p, th;
	char err[5] = "Error";

	th = 3;
	if (argc != th)
	{
		printf("%s\n", err);
		return (1);
	}
	else
	{
		p = (atoi(argv[2]) * atoi(argv[1]));
		printf("%d", p);
		putchar('\n');
	}

	return (0);
}


