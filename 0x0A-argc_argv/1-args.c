#include "main.h"
#include <stdio.h>

/**
 * main - Entry point that prints the arguments' counts passed
 *	to the program
 * @argv: arguments' array
 * @argc: arguments' counts
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	putchar('\n');

	return (0);
}

