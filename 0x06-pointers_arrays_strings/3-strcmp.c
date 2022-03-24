#include "main.h"
#include "_strlen.c"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 = s2, 1 if s1 > s2, -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int iter;
	long int len;

	len = _strlen(s1) + 1;
	for (iter = 0; iter < len; iter++)
	{
		if (s1[iter] == s2[iter])
		{
			return (0);
		}
		else if (s1[iter] > s2[iter])
		{
			return (15);
		}
		else
		{
			return (-15);
		}
	}
	return (0);
}
