#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet or not
 *
 * @c: charcater to be checked
 *
 * Return: 1 if character is alphabet, 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}

