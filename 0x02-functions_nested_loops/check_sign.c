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
