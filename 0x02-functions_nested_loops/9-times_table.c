#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 *
 * Return: void
 *
 */

void times_table(void)
{
	int x;
	int y;
	int m;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			m = x * y;
			if (m <= 9)
			{
				_putchar(m + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
