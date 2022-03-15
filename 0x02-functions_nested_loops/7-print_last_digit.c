#include "main.h"
/**
 * check_sign - Prints the sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than 0
 */

int check_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	return (0);
}

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer to be computed
 *
 * Return: 0 if successful
 */

int _abs(int n)
{
	if (check_sign(n) == 1)
		return (n);
	else if (check_sign(n) == -1)
		return (n * -1);
	return (0);
}

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

	mod = _abs(n % 10);

	_putchar(mod + '0');
	return (1);
}
