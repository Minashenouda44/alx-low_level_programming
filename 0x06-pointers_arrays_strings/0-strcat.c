#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @src: string
 * @dest: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
