#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point that prints the minimum number of coins
 *	to make change for an amount of money
 * @argv: pointer that stores arguments' array
 * @argc: stores the arguments' count
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(int argc, char *argv[])
{
	/*cinum for number of coins*/
	int cinum, needed, cents;
	char err[5] = "Error";

	cinum = 0;
	needed = 2;
	if (argc != needed)
	{
		printf("%s\n", err);
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents = cents -25;
			}
			else if (cents >= 10)
			{
				cents = cents - 10;
			}
			else if (cents >= 5)
			{
				cents = cents - 5;
			}
			else if (cents >= 2)
			{
				cents = cents - 2;
			}
			else if (cents >= 1)
			{
				cents = cents - 1;
			}
			cinum = cinum + 1;
		}
	}

	printf("%d", cinum);
	putchar('\n');

	return (0);
}

