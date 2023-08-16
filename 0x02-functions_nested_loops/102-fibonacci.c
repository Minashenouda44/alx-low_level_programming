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
		int divisor = 1;

		int d;

		while (next / divisor >= 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			d = (next / divisor) % 10;

			_putchar(d + '0');
			divisor /= 10;
		}
	}

	_putchar('\n');
	return (0);
}

