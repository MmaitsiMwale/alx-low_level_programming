#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: least value in array
 * @max: largest value in array
 * Return: pointer to array of integers
 */

int *array_range(int min, int max)
{
	int *int_array;
	int size, iter;

	iter = 0;

	if (min > max)
		return (NULL);
	size = max - min;
	int_array = malloc(sizeof(int) * size + 1);
	if (!int_array)
		return (NULL);
	while (iter < size + 1)
	{
		int_array[iter] = min++;
		iter++;
	}
	return (int_array);
}
