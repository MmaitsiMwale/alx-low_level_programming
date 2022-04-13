#include "function_pointers.h"

/**
 * int_index - searches for an integer in an @array
 * @array: array to be searched
 * @size: number of elements in @array
 * @cmp: pointer to function that compares values
 *
 * Return: index of first element if cmp != 0, -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size > 0 && array && size && cmp)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);	
}
