#include "main.h"
#include <string.h>

/**
 * _strdup - a function returns pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: p
 */

char *_strdup(char *str)
{
	char *p;

	if (str == 0)
		return (0);

	p = malloc(strlen(str) + 1);

	if (p == 0)
		return (0);

	strcpy(p, str);

	return (p);
}
