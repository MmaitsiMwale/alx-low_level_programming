#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 */

void _puts(char *str)
{
	int iter = 0;

	while (str[iter])
	{
		_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
}
