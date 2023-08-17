#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size : size of the square
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	for (x = 0 ; x < size ; x++)
	{
		for (y = 0 ; y < size ; y++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
