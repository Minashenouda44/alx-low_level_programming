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
	unsigned int i;
	char *p;

	p = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);

	if (p == 0)
		return (0);

	s1 = (s1 != 0) ? s1 : 0;
	s2 = (s2 != 0) ? s2 : 0;

	for (i = 0 ; i <= strlen(s1) + strlen(s2) ; i++)
	{
		if (i <= strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[i - strlen(s1)];
	}
	p[i] = '\0';

	return (p);
}
