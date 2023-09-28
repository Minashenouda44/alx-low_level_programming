#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: position of the bit to get
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	/* 1UL is an unsigned long integer literal = 1 */
	/* 000...001 */
	mask = 1UL << index;
	*n = *n & ~mask;

	return (1);
}
