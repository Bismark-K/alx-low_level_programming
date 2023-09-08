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

if (n > 5)
printf("Last digit of %i is greater than 5\n", n);
else if (n == 0)
printf("Last digit of %i is 0\n", n);
else if (n < 6 && n != 0)
printf("Last digit of %i is less than 6 and not 0\n", n);
}
