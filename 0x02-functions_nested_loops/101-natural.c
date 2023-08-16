#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i;
	int s;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (!(i % 3 || i % 5))
			s += i;
	}

	_putchar(s + '0');

	return (0);
}
