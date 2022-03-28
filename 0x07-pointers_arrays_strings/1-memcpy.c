#include "main.h"
/**
 * _memcpy - copies n bytes of memory area src to dest
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	iter = 0;
	while (iter < n)
	{
		dest[iter] = src[iter];
		iter++;
	}
	return (dest);
}
