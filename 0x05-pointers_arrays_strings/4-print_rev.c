#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	int forward, backward;

	for (forward = 0; s[forward] != '\0'; forward++)
		;
	for (backward = forward - 1; backward >= s[forward]; backward--)
		_putchar(s[backward]);
	_putchar('\n');
}
