#include "main.h"
#include <stdio.h>

/**
 * times_table - multiplication table
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int mul = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
