#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - this function prints out a name
 * @f: the function's pointer
 * @name: the name to print
 *
 * Author: dz1dzor
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

