#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string to be printed
 *
 */

void rev_string(char *s)
{
	int forward, backward;

	for (forward = 0; s[forward] != '\0'; forward++)
		;
	for (backward = forward - 1; backward >= s[forward]; backward--)
		_putchar(s[backward]);
}
