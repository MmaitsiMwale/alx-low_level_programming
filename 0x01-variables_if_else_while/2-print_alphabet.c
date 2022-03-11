#include <stdio.h>

/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	char start;
	char end = 'z';

	for (start = 'a'; start <= end; start++)
		putchar(start);
	putchar('\n');
	return (0);
}
