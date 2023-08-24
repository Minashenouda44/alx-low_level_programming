#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @ ;
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == ' ' || str[i] == '\t' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (str);
}


