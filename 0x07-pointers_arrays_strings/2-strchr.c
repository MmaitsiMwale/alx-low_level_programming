#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurence of c in s or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int iter;
	char *ptr = '\0';

	iter = 0;
	for (; s[iter] >= ptr; iter++)
	{
		if (s[iter] == c)
			return (s + iter);
	}
	return (ptr);
}
