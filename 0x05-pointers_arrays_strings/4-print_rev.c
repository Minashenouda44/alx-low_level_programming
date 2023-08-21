#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s : string
 * Return: void
 */

void print_rev(char *s)
{
	int l;

	l = _strlen(*s);

	int i;

	for (i = l ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
