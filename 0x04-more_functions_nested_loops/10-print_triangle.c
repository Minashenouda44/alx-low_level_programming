#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size : size
 * return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;
		int space;
		int hash;
		int i;

		for (r = 1 ; r <= size ; r++)
		{
			space = size - r;
			hash = r;

			for (i = 0 ; i < space ; i++)
			{
				_putchar(' ');
			}

			for (i = 0 ; i < hash ; i++)
			{
				_putchar('#');
			}
			
			_putchar('\n');
		}
	}
}
