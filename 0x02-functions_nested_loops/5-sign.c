#include "main.h"
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n : number
 *
 * Return: 1 positive 0 zreo -1 negative
 */

int print_sign(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (1);
	else
		return (-1);
}
