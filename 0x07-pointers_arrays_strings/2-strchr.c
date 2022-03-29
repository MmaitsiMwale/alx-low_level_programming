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
	/*char *ptr = NULL;*/

	iter = 0;
	while (*s)
	{
		if (s[iter] == c)
			return (s);
		iter++;
	}
	return (s + 1);
}
