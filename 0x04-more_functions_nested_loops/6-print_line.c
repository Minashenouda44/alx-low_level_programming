#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n : _ no
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}

		n--;
	}

	_putchar('\n');
}
