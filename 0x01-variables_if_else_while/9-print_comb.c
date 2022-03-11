#include <stdio.h>
/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	int start = '0';

	for (; start <= '9'; start++)
	{
		putchar(start);
		if (start == '9')
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
