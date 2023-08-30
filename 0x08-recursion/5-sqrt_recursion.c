#include "main.h"

/**
 * _sqrt_recursion - a function that returns square root of a number.
 * @n: number
 * @r2: sqrt
 * Return: -1 no sqrt
 */

int sQr2(int n, int r2);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sQr2(n, 0));
}

/**
 * sQr2 - function that returns square root
 * @n: number
 * @r2: sqrt
 * Return: -1 no sqrt
 */

int sQr2(int n, int r2)
{
	if (r2 * r2 == n)
		return (r2);

	if (r2 * r2 > n)
		return (-1);

	return (sQr2(n, r2 + 1));
}

