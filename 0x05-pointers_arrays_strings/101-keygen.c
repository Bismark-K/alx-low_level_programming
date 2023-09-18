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
	int a, b;
	time_t ti;

	srand((unsigned int) time(&ti));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
		{
			break;
		}
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));

	return (0);
}

