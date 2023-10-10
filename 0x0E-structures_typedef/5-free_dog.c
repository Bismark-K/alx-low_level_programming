#include "main.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the pointer for struct dog
 * @d: the struct to free
 *
 * Author: dz1dzor
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

