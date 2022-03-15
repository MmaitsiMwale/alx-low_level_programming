#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char start;
	char end = 'z';
	int mul = 10;
	int iter;

	for (int iter = 1; iter <= mul; iter++)
	{
		for (start = 'a'; start <= end; start++)
		{
			_putchar(start);
		}
	}
	_putchar('\n');
}
