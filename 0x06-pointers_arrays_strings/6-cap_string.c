#include "main.h"
#include <stdio.h>

/**
 * _islower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */
int _islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isseparator - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isseparator(char c)
{
	int i;
	char separators[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == separators[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isseparator(*s))
			foundDelimit = 1;
		else if (_islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
