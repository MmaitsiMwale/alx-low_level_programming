#include "main.h"
/**
 * _islower - checks whether a character is lowercase or not
 *
 * @c: charcater to be checked
 *
 * Return: 1 if character is lowercase, 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}

