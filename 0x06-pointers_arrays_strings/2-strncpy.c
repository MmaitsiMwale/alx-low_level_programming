#include "main.h"
#include "_strlen.c"

/**
 * _strncpy - copies a string from source (src) to destination (dest)
 * @src: source of string
 * @dest: destination of copied string
 * @n: number of bytes to be copied from src
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int iter;

	for (iter = 0; iter < n && src[iter] != '\0'; iter++)
		dest[iter] = src[iter];
	dest[iter] = '\0';
	return (dest);
}

