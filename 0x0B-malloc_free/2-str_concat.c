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
	int l1;
	int l2;
	int i;
	char *p;

	s1 = (s1 != 0) ? s1 : '\0';
	s2 = (s2 != 0) ? s2 : '\0';

	l1 = (s1 != 0) ? strlen(s1) : 0;
	l2 = (s2 != 0) ? strlen(s2) : 0;

	p = malloc((l1 + l2) * sizeof(char) + 1);

	if (p == 0)
		return (0);
	for (i = 0 ; i <= (l1 + l2) ; i++)
	{
		if (i <= l1)
			p[i] = s1[i];
		else
			p[i] = s2[i - l1];
	}

	p[i] = '\0';

	return (p);
}
