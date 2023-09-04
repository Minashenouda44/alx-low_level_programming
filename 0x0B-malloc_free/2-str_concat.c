#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: p
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	p = malloc(strlen(s1) + strlen(s2) + 1);

	if (p == 0)
		return (0);

	if (s1 != 0)
		strcpy(p, s1);
	if (s2 != 0)
		strcat(p, s2);

	return (p);
}
