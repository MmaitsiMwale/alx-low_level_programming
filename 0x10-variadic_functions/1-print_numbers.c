#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator or delimiter
 * @n: number of arguments
 *
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(arg, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(arg);
	printf("\n");
}
