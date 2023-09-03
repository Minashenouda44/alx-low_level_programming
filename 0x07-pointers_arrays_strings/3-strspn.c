#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != s[i] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
