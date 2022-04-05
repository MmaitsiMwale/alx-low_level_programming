#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a copy of a string.
 * @str: string to be copied.
 *
 * Return: pointer to copy of str, NULL if unsuccessful.
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int iter, iter2;

	if (str == NULL)
		return (NULL);

	iter = 0;
	while (str[iter])
		iter++;
	dest = (char *)malloc(sizeof(char) * iter);

	if (dest == NULL)
		return (NULL);

	iter2 = 0;
	while (str[iter2])
	{
		dest[iter2] = str[iter2];
		iter2++;
	}
	return (dest);
}
