#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: string1
 * @accept: string2
 * Return: &s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}

	return (0);
}
