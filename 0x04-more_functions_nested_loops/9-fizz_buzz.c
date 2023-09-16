#include "main.h"

/**
 * main - print numbers from 1 - 100 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; ++n)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && !(n % 3 == 0))
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}

