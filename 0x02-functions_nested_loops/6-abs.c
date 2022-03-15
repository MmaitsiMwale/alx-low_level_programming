#include "main.h"
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

