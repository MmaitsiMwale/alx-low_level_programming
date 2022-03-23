#include "main.h"

/**
* _strncat - Entry Point. Concatenates two strings with conditions
* @dest: String Pointer destination
* @src: string to concatenated
* @n: Possible number of characters to concatenate
* Return: Concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
