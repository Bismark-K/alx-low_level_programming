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
	int psswd[100];
	int j, ad, x;

	ad = 0;	

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		psswd[j] = rand() % 78;
		ad += (psswd[j] + '0');
		putchar(psswd[j] + '0');
		if ((2772 - ad) - '0' < 78)
		{
			x = 2772 - ad - '0';
			ad += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}

