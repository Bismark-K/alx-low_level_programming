#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point that prints all arguments
 * @argv: argument with data type, char
 * @argc: argument with data type, int
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(int argc, char *argv[])
{
	int prod, num1, num2;
	char err[] = "error";

	if (argc != 3)
		printf("%s\n", err);
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num2 * num1;
		printf("%d\n", prod);
	}

	return (0);
}

