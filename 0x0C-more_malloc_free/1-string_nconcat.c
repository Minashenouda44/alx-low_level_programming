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
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	m = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (m == 0)
		return (NULL);

	strcpy(m, s1);
	strncat(m, s2, n);

	return (m);
}
