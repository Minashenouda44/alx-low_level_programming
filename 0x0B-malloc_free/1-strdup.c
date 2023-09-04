#include "main.h"

/**
 * _strdup - a function returns pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: p
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == 0)
		return (0);

	p = malloc(sizeof(*str));

	if (p == 0)
		return (0);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
