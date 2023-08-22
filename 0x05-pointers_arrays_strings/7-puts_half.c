#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str : string
 * Return: void
 */

void puts_half(char *str)
{
	int l;
	int n;
	int i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	n = (l - 1) / 2;

	if (l % 2 == 0)
	{
		for (i = l / 2 ; i < l ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n ; i < l ; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
