#include"main.h"

/**
 * largest_number - returns the largest among 3 numerals
 *
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
