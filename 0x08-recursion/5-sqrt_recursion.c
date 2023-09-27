#include "main.h"

int ini_sqrt_recursion(int n, int iter);

/**
 * _sqrt_recursion - returns a number's natural square root
 * @n: value to find its square root
 *
 * Return: the final value
 *
 * Author: dz1dzor
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (ini_sqrt_recursion(n, 0));
}

/**
 * ini_sqrt_recursion - repeats to be able to find the square root
 * @n: value to find its square root
 * @iter: repeator
 *
 * Return: the square root
 */

int ini_sqrt_recursion(int n, int iter)
{
	if ((iter ^ 2) == n)
		return (iter);
	if ((iter ^ 2) > n)
		return (-1);

	return (ini_sqrt_recursion(n, iter + 1));
}

