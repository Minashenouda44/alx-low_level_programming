#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 1 identical 0 not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

