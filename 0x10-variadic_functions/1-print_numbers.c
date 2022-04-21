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
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
