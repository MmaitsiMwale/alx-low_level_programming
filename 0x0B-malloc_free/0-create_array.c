#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes with c.
 * @c: character initialized in array.
 * @size: size of array
 *
 * Return: pointer to array, NULL if size=0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr || !size)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);

}
