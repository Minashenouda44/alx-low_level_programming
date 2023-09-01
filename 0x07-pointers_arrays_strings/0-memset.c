#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: array
 * @b: constant
 * @n: integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	char *start = s;

	for (i = 0 ; i < n ; i++)
	{
		s[i] =  b;
	}

	return (start);
}