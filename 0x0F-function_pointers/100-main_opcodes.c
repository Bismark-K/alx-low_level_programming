#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the opcode of it's function
 * @argv: array or arguments
 * @argc: counts of arguments
 * Return: exit 2 if byte is negative and 1 if one arg is wrong
 *
 * Author: dz1dzor
 */
int main(int argc, char *argv[])
{
	int index, bt, sp = 32;
	char err[5] = "Error", *ar = (unsigned char *)main;

	bt = atoi(argv[1]);
	if (argc != 2)
	{
		printf("%s\n", err);
		exit(1);
	}
	if (bt < 0)
	{
		printf("%s\n", err);
		exit(2);
	}
	for (index = 0; index < bt; index++)
	{
		printf("%02x", ar[index] & 0xFF);
		if (index != bt - 1)
		{
			printf("%c", sp);
			/*break;*/
		}
		/*printf("%02x ", ar[index]);*/
	}
	putchar('\n');

	return (0);
}

