#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}
