#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 *
 * @n: number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (mod < 0)
	{
		_putchar(-mod + 48);
		return (-1);
	}
	else
	{
		_putchar(mod + 48);
		return (1);
	}
}
