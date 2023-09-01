#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
