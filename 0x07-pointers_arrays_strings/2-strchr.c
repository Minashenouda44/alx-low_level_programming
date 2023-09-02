#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: Pointer to string
 * @c: character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);

	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (NULL);
}
