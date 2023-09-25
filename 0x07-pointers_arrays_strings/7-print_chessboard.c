#include "main.h"

/**
 * print_chessboard - a functions that prints out the chessboard
 *
 * @a: the array to print
 *
 * Author: dz1dzor
 */

void print_chessboard(char (*a)[8])
{
	int index, index2;

	for (index = 0; index <= 7; index++)
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			_putchar(a[index][index2]);
		}
		_putchar('\n');
	}
}

