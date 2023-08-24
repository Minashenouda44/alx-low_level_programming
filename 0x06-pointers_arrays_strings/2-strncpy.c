#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @src: s string
 * @dest: d string
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
		dest[i] = '\0';

	return (dest);
}
