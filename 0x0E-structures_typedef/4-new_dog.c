#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
	/*
	 * char *ptr = s;
	 * while (*s)
	 * s++;
	 * return (s - ptr);
	 **/
}

/**
 * *_strcpy - copies a string including the terminating null byte
 * @dest: copied string
 * @src: string to be copied
 * Return: pointer to new copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (ptr);
}

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
	char *copy_name = malloc(sizeof(char) * _strlen(name));
	char *copy_owner = malloc(sizeof(char) * _strlen(owner));

	dog_t *another_dog = malloc(sizeof(dog_t));

	if (!another_dog)
		return (NULL);
	another_dog->name = _strcpy(copy_name, name);
	another_dog->age = age;
	another_dog->owner = _strcpy(copy_owner, owner);
	return (another_dog);
}

