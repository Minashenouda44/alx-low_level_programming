#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s : string
 * Return: void
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);

	for (i = l - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
