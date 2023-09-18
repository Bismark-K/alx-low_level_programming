#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point.
 *
 * Description: to generate random passwords
 *
 * Return: the password generated
 *
 * Author: dz1dzor
 */

int main(void)
{
	char a;
	int i;

	srand(time(0));

	while (i <= 2645)
	{
		a = rand() % 128;
		i += a;
		putchar(a);
	}
	putchar(2772 - i);
	putchar('\n');

	return (0);
}

