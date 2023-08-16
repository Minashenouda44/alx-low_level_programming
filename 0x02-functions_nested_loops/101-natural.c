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
	int s = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	}

	_putchar(s / 10 + '0');
	_putchar(s % 10 + '0');

	return (0);
}
