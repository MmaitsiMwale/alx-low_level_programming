#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 *
 * Return: pointer to memory location.
 */

void *malloc_checked(unsigned int b)
{

	unsigned int *ptr;
	(void)b;

	ptr = malloc(sizeof(unsigned int));

	if (!ptr)
		exit(98);
	return (ptr);
}
