#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n : number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
