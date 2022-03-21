#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character followed by a new line
 * @str: string to be printed
 *
 */

void puts2(char *str)
{
	int iter = 0;

	while (iter < _strlen(str))
	{
		if (iter % 2 == 0)
		{
			_putchar(str[iter]);
		}
		iter++;
	}
}
