#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @src: string
 * @dest: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*temp)
		temp++;

	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}

	return (dest);
}
