#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer
 * Return: 0 success -1 error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
	{
		return (n * factorial(n - 1));
	}
}

