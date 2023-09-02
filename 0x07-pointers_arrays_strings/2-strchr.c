#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: Pointer to string
 * @c: character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}
	
	if (*s == '\0')
		return (s);

	return (0);
}
