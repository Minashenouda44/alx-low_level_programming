#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	int f = 1;
	int s = 2;
	int next = 0;

	_putchar(f);
	_putchar(',');
	_putchar(' ');
	_putchar(s);

	for (i = 2 ; i < 50 ; i++)
	{
		_putchar(',');
		_putchar(' ');

		next = f + s;
		f = s;
		s = next;

		_putchar(next);
	}

	_putchar('\n');

	return (0);
}

