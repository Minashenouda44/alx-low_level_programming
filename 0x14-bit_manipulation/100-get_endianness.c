#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: *c
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char*) &x;

	return ((int)*c);
}
