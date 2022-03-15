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
	_putchar(mod);
	return (mod);
}
