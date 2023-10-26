#include "main.h"

/**
 * print_binary - prints a number in it's binary representation
 * @n: unsigned long interger
 *
 * Return: nothing
 * Author: dz1dzor
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}

