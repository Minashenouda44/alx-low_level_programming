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
	char *temp;
	int i;

	temp = dest;

	while (*temp)
		temp++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		*temp = *src;
		temp++;
		src++;
	}

	if (strlen(dest) >= (strlen(src) + n + 1))
		dest[i] = '\0';

	return (dest);
}
