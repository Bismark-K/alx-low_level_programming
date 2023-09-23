#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @ch: expected character to print
 *
 * Return: On error, -1, on success 1, and
 *      errno is appropriated
 */

int _putchar.c(char ch)
{
	return (write(1, &ch, 1));
}

