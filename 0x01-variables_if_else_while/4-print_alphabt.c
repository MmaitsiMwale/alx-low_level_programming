#include <stdio.h>
/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	char start = 'a';
	char end = 'z';

	for (; start <= end; start++)
	{
		if ((start == 'e') || (start == 'q'))
		{
			continue;
		}
		putchar(start);
	}
	putchar('\n');
	return (0);
}
