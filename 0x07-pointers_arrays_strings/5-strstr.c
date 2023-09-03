#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: &haystack[i]
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0 ; haystack[i] ; i++)
	{
		k = i;
		for (j = 0 ; needle[j] && haystack[k] == needle[j] ; j++)
		{
			k++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}
