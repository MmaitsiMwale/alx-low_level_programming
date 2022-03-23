#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenated string
 * @src: source of string
 *
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a))
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	return (dest);
}
