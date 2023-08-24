#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	r = 0;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{

		if (s1[i] == s2[i])
			break;
		else if (s1[i] < s2[i])
		{
			r += (s1[i] - s2[i]);
			break;
		}
		else if (s2[i] < s1[i])
		{
			r -= (s2[i] - s1[i]);
			break;
		}
	}

	return (r);
}
