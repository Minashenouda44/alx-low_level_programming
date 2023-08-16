#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a function that prints the n times table
 *
 * @n :
 *
 * return: void
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				m = i * j;
				if (j == 0)
					_putchar(m);
				if (m <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m <= 99)
				{
					_putchar(' ');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
				else
				{
					_putchar(m / 100 + '0');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
