#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n : last digit
 *
 * Return: 0 success
 *
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar(ld);

	return (ld);
}
