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

	for (start = 'a'; start <= end; start++)
		_putchar(start);
	_putchar('\n');
}
