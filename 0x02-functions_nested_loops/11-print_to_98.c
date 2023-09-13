#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *
 * @n: input
*/

void print_to_98(int n)
{
	int compute;

	if (n > 98)
	{
		for (compute = n; compute > 98; --compute)
		printf("%d, ", compute);
	}
	else
	{
		for (compute = n; compute < 98; ++compute)
		{
			printf("%d, ", compute);
		}
	}
	printf("98\n");
}
