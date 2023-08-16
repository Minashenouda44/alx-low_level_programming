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


		_putchar(next + '0');
	}

	_putchar('\n');
	return (0);
}

