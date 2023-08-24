#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 * @ : string
 * @str: string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
