#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: pointer to changed string
 *
 */

char *string_toupper(char *str)
{
	int iter = 0;

	while (str[iter])
	{
		if (str[iter] >= 'a' && str[iter] <= 'z')
			str[iter] -= 32;
		iter++;
	}
	return (str);
}
