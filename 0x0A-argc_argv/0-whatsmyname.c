#include "main.h"
#include <stdio.h>

/**
 * main - Entry point that prints the name of the program
 * @argv: array of arguments
 * @argc: counts of arguments
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

