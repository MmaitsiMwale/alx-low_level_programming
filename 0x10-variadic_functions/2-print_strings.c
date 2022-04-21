#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 *
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		printf("%s%s", va_arg(arg, char*),
				(separator && i != n - 1) ? separator : "");
	va_end(arg);
	printf("\n");
}
