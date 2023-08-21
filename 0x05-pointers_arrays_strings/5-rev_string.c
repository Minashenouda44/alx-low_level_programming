#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s : string
 * Return: void
 */

void rev_string(char *s)
{
	int l;

	char *start = s;
	char *end = s;
	char temp;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	end = s + l - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
