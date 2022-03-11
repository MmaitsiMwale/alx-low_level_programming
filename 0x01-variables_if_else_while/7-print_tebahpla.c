#include <stdio.h>

/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	char start = 'z';
	char end = 'a';

	for (; start >= end; start--)
		putchar(start);
	putchar('\n');
	return (0);
}
