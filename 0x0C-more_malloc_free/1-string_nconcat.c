#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
	char *ptr = s;

	while (*s)
		s++;
	return (s - ptr);
	*/
}

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, len1, len2;
	char *ptr;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	printf("len of s1: %d\n", len1);
	len2 = _strlen(s2);
	printf("len of s2: %d\n", len2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = 0;
	return (ptr);
}

