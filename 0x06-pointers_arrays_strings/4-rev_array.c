#include "main.h"

/**
 * swap - swaps the value of two integers
 * @a: pointer a
 * @b: pointer b
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int iter = 0;

	while (iter < n / 2)
	{
		swap(a + iter, a + (n - iter - 1));
		iter++;
	}


}
