#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char start;
	char end = 'z';
	int mul = 10;
	int iter;

	for (iter = 1; iter <= mul; iter++)
	{
		for (start = 'a'; start <= end; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
