#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: Pointer to string
 * @c: character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (0);
}
