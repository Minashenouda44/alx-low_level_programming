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

	_putchar(f + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(s + '0');

	for (i = 2 ; i < 50 ; i++)
	{
		_putchar(',');
		_putchar(' ');

		next = f + s;
		f = s;
		s = next;

		_putchar((next / 100000000000) % 10 + '0');
		_putchar((next / 10000000000) % 10 + '0');
		_putchar((next / 1000000000) % 10 + '0');
		_putchar((next / 100000000) % 10 + '0');
		_putchar((next / 10000000) % 10 + '0');
		_putchar((next / 1000000) % 10 + '0');
		_putchar((next / 100000) % 10 + '0');
		_putchar((next / 10000) % 10 + '0');
		_putchar((next / 1000) % 10 + '0');
		_putchar((next / 100) % 10 + '0');
		_putchar((next / 10) % 10 + '0');
		_putchar((next / 1) % 10 + '0');
		_putchar('\n');
	}

	_putchar('\n');

	return (0);
}

