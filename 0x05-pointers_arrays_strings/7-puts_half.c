#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int iter = 0;

	while (str[iter])
	{
		if (iter < _strlen(str) / 2)
		{
			continue;
		}
		else
		{
			_putchar(str[iter]);
		}
		iter++;
	}
}
