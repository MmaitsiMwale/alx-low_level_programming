#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines a new type, dog
 * @name: Name of dog
 * @owner: Owner of dog
 * @age: Age of dog
 *
 * Description: Defines a type dog that has a name, owner and age
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
