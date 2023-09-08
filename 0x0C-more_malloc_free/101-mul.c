#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 * @s: string
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		_putchar(s[i]);
}

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int i, fdigit, r = 0;

	for (fdigit = 0 ; !(s[fdigit] >= 48 && s[fdigit] <= 57) ; fdigit++)
	{
		if (s[fdigit] == '-')
			sign = -1;
	}
	for (i = fdigit ; s[i] >= 48 && s[i] <= 57 ; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}

	return (sign * r);
}

/**
 * print_mul - print the multiplication
 * @n: int
 * Return: 0
 */

void print_mul(unsigned long int n)
{
	unsigned long int i, r, d = 1;

	for (i = 0 ; n / d > 9 ; i++, d *= 10)
		;
	for (; d >= 1 ; d /= 10)
	{
		r = n / d;
		_putchar('0' + r);
		n %= d;
	}
}


/**
 * main - a program that multiplies two positive numbers.
 * @argc: count
 * @argv: values
 * Return: 0
 */

int main(int argc, const char *argv[])
{
	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_mul(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
