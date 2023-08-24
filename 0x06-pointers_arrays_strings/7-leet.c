#include "main.h"

/**
 * *leet -  a function that encodes a string into 1337.
 * @s: string
 * Return: char
 */

char *leet(char *s)
{
	int i;
	char *r = s;
	char ch[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (*s == ch[i] || *s == ch[i] + 32)
				*s = n[i] + 48;
		}
		s++;
	}

	return (r);
}
