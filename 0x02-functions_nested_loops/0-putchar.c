#include "main.h"
/**
 * main - Program Entry point
 *
 * Return: 0 when successful
 *
 */

int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		_putchar(*word++);
	}
	_putchar('\n');
	return (0);
}
