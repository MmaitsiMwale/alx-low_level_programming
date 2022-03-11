#include <stdio.h>
/**
* main - Program Entry Point
*
* Return: 0 if successful
*/

int main(void)
{
	char start_lower, start_upper;
	char end_lower = 'z';
	char end_upper = 'Z';

	for (start_lower = 'a'; start_lower <= end_lower; start_lower++)
		putchar(start_lower);
	for (start_upper = 'A'; start_upper <= end_upper; start_upper++)
		putchar(start_upper);
	putchar('\n');
	return (0);
}
