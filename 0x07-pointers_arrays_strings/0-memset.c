#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string buffer
 * @b: character to be filled
 * @n: number of bytes to be used
 *
 * Return: pointer to character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter;

	iter = 0;
	while (iter < n)
	{
		s[iter] = b;
		iter++;
	}
	return (s);
}
