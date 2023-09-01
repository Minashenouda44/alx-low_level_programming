#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d;

	d = 0;

	while (dest[d] != '\0')
		d++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[d + i] = src[i];
	}

	dest[d + i] = '\0';

	return (dest);
}
