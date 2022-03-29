#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: pointer to be the byte that matches accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int iter;

	while (*s)
	{
		for (iter = 0; accept[iter]; iter++)
		{
			if (*s == accept[iter])
				return (s);
		}
		s++;
	}
	return (s + 1);
}
