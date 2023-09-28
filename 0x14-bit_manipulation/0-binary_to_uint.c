#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: point to string input
 * Return: convNum
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convNum = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		convNum = (convNum << 1) + (*b - '0');
		b++;
	}
	return (convNum);
}
