#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*My code for the task*/
	int last_digit;
	last_digit = n % 10; /*Gets last digit*/

	if (last_digit > 5)
		printf("Last digit of %i is greater than 5\n", n);
	else if (last_digit == 0)
		printf("Last digit of %i is 0\n", n);
	else if (last_digit < 6 && n % 10 != 0)
		printf("Last digit of %i is less than 6 and not 0\n", n);
}
