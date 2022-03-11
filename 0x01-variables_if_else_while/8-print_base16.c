#include <stdio.h>
/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	int start = '0';
	char first = 'a';

	for (; start <= '9'; start++)
		putchar(start);

	for (; first <= 'f'; first++)
		putchar(first);
	putchar('\n');
	return (0);
}
