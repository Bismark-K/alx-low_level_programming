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
int n, number;
srand(time(0));
number = n % 10;
if (number > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, number);
else if (number == 0)
printf("Last digit of %i is %i and is 0\n", n, number);
else if (number < 6 && number != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, number);
}
