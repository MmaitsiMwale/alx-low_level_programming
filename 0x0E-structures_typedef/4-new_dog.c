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
	char *copy_name = malloc(sizeof(char) * _strlen(name) + 1);
	char *copy_owner = malloc(sizeof(char) * _strlen(owner) + 1);

	dog_t *another_dog = malloc(sizeof(dog_t));
	
	if (!another_dog)
		return (NULL);
	another_dog->name = _strcpy(copy_name, name);
	another_dog->age = age;
	another_dog->owner = _strcpy(copy_owner, owner);
	return (another_dog);
}
