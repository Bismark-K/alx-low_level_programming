#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out the character c
 *
 * @c: the character to be printed out
 *
 * Author: dz1dzor
 * Return: 1, if successful, -1 on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

