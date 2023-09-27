#include "main.h"

int _strlen(char *s);
int thor_chek(char *s, int i, int length);

/**
 * is_palindrome - looks to see if a string is a palindrome
 * @s: the string expected to be reversed
 *
 * Return: 0, if it is not but 1 if it is
 *
 * Author: dz1dzor
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (thor_chek(s, 0, _strlen(s)));
}

/**
 * thor_chek - looks recursively for palindrome in the characters
 * @iter: repeator
 * @length: string's length
 * @s: string to look through
 *
 * Return: 0 if not a palindrome but 1 if it is
 */

int thor_chek(char *s, int iter, int length)
{
	if (iter >= length)
		return (1);
	if (*(s + length - 1) != *(s + iter))
		return (0);

	return (thor_chek(s, iter + 1, length - 1));
}

/**
 * _strlen - returns the string's length
 * @s: string to find the length of
 *
 * Return: string's length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

