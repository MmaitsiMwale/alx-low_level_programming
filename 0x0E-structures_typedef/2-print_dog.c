#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (!d)
		exit(1);
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)",
			d->age, d->owner ? d->owner : "(nil)");
}
