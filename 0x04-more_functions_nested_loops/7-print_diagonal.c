#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n : no of lines
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
