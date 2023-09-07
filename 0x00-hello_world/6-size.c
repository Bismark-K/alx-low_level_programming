#include <stdio.h>

/**
 *main - Entry point
 *
 *Program that prints the size of various size
 *Return: Always 0 (Success)
 */

int main(void)
{
int int1;
char char1;
long int long_int1;
long long long l_l_i;
float float1;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu bye(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
