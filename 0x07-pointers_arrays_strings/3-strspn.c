#include "main.h"
#include "_strlen.c"
/**
 * _strspn - gets the length of a prefix substring
 * @s: full string to be checked
 * @accept: substring
 *
 * Return: number of bytes (length of substring)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_count = 0;
	int iter, isChar;

	while (*s)
	{
		for (iter = 0; accept[iter]; iter++)
		{
			isChar = 0;
			if (*s == accept[iter])
			{
				byte_count++;
				isChar = 1;
				break;
			}
		}
		if (!isChar)
			break;
		s++;
	}
	return (byte_count);
}
