#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit;
	int bitPoss;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bitPoss = sizeof(n) * 8 - 1;
	while ((n >> bitPoss) == 0)
		bitPoss--;
	for (; bitPoss >= 0 ; bitPoss--)
	{
		bit = (n >> bitPoss) & 1;
		_putchar('0' + bit);
	}
}
