#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return: flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	unsigned int flips = 0;

	XOR = n ^ m;

	while (XOR)
	{
		flips += XOR & 1;
		XOR >>= 1;
	}
	return (flips);
}
