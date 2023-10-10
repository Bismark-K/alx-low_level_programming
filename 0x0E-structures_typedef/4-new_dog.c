#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies the string from src to dest
 * @src: where we copy the string from
 * @dest: where we copy the string to
 *
 * Return: dest's pointer
 *
 * Author: dz1dzor
 */
char *_strcpy(char *dest, char *src)
{
	int index, length = 0;

	while (src[length] != '\0')
		length++;

	for (index = 0; index < length; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * _strlen - the length of the string is returned
 * @s: string to calculate its length
 *
 * Return: string's length
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;

	return (index);
}

/**
 * new_dog - function that creates a new and fresh dog
 * @owner: the owner of the dog
 * @name: name of the dog
 * @age: age of the dog
 *
 * Return: NULL if failed, pointer to the new dog if successful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (age < 0 || !owner || !name)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	if (dog == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->owner = _strcpy(dog->owner, owner);
	dog->name = _strcpy(dog->name, name);
	dog->age = age;

	return (dog);
}

