#include "main.h"

/**
 * factorial - function to return a number's factorial
 * @n: number of which to return its factorial form
 *
 * Return: n factorial
 *
 * Author: dz1dzor
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

