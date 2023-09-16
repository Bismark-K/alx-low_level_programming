#include"main.h"

/**
 * print_square - print a square using #
 *
 * @size: the square's size
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	return (0);
}

