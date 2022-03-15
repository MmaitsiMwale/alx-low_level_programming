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
	int iter = 0;

	while (iter <= (int)sizeof(word))
	{
		_putchar(word[iter]);
		iter++;
	}
	_putchar('\n');
	return (0);
}
