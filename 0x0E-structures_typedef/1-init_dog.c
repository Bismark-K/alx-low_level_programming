#include "dog.h"

/**
 * init_dog - initializes dog of type struct
 * @d: struct dog's pointer
 * @age: dog's age
 * @owner: dog's owner
 * @name: dog's name
 *
 * Author: dz1dzor
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).age = age;
		(*d).owner =  owner;
		(*d).name = name;
	}
}

