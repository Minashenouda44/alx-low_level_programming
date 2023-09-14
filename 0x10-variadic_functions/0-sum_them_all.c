#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: arg numbers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list argsum;

	if (n == 0)
		return (0);

	va_start(argsum, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(argsum, unsigned int);
	}

	return (sum);
}
