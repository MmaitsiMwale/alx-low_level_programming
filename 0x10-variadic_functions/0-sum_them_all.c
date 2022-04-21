#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its arguments
 * @n: constant, number of arguments
 *
 * Return: sum of integers
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (n == 0)
			return (0);
		sum += x;
	}
	va_end(args);
	return (sum);

}
