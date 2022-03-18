#include "main.h"
#include <stdio.h>

/**
 * main - computes the sum of multiple of 3 and 5 from 1024
 *
 * Return: 0 if successful
 */

int main(void)
{
	int iter, multiples = 0;

	while (iter < 1024)
	{
		if (iter % 3 == 0 || iter % 5 == 0)
		{
			multiples += iter;
		}
		else
		{
			;
		}
		iter++;
	}
	printf("%d", multiples);
	return (0);
}
