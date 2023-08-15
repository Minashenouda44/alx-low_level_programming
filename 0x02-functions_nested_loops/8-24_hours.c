#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 00 ; i <= 23 ; i++)
	{
		for (j = 00 ; j <= 59 ; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
