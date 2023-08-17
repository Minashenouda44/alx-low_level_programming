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
		int x;
		int y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				_putchar(' ');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
}
