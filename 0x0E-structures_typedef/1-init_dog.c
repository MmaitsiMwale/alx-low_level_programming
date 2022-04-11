#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: type struct dog
 * @name: string name of dog
 * @age: float age of dog
 * @owner: string owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
