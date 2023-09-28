#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: position of the bit to get
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	(UNUSED)bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit = (*n >> index | 1);

	return (1);
}
