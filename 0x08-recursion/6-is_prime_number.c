#include "main.h"

int ini_prime(int n, int iter);

/**
 * is_prime_number - checks to see a number falls under prime numbers or not
 * @n: number to check
 *
 * Return: 0 if n is not a prime number and 1 if n is a prime number
 *
 * Author: dz1dzor
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (ini_prime(n, n - 1));
}

/**
 * ini_prime - repeatedly, checks if the integer is a prime number
 * @iter: repeater
 * @n: number to check
 *
 * Return: 0 if it's not a prime number and 1 if it it is
 *
 * Author: dz1dzor
 */

int ini_prime(int n, int iter)
{
	if (i > 0 && n % iter == 0)
	{
		return (0);
	}
	if (iter == 1)
	{
		return (1);
	}
	return (ini_prime(n, iter - 1));
}

