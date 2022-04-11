#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
	/*
	 * char *ptr = s;
	 * while (*s)
	 * s++;
	 * return (s - ptr);
	 **/
}

