#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *another_dog = malloc(sizeof(dog_t));
	
	if (!another_dog)
		return (NULL);
	another_dog->name = name;
	another_dog->age = age;
	another_dog->owner = owner;
	return (another_dog);
}
