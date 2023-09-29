#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to print all received arguments
 * @argv: arguments' arrays
 * @argc: arguments' counts
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s", argv[j]);
		putchar('\n');
	}

	return (0);
}

