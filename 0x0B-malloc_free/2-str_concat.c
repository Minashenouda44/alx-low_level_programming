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

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	l1 = strlen(s1);
	l2 = strlen(s2);

	p = malloc((l1 + l2) * sizeof(char) + 1);

	if (p == 0)
		return (0);
	for (i = 0 ; i <= l1 + l2 ; i++)
	{
		if (i <= l1)
			p[i] = s1[i];
		else
			p[i] = s2[i - l1];
	}

	p[i] = '\0';

	return (p);
}
