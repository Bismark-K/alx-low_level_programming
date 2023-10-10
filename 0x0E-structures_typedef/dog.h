#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info about a dog
 * @owner: name of the owner of the dog
 * @name: name of the dog
 * @age: the dog's age
 *
 * Author: dz1dzor
 */

struct dog
{
	char *owner;
	float age;
	char *name;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*dz1dzor*/

