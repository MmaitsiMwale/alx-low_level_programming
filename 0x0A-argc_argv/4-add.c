#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	/*if (argc < 3)
		puts("Error");*/
	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
			sum += atoi(argv[i]);
		else
			puts("Error");
	}
	printf("%d\n", sum);
	return (0);
}
