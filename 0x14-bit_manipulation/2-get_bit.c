#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: number
 * @index: position of the bit to get
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit = (n >> index & 1);

	return (bit);
}
