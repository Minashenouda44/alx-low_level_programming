#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: m
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *m;

	m = malloc(strlen(s1) + n);

	if (m == 0)
		exit(0);

	strcpy(m, s1);
	strncat(m, s2, n);

	return (m);
}
