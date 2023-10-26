#include "main.h"

/**
 * _putchar - writes a character to standard output
 * @ch: character
 *
 * Return: Always 1 (Success)
 * Author: dz1dzor
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

