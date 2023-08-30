#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input is a prime number,
 * @n: number
 * @d: divisor
 * Return: 1 if prime 0 otherwise
 */

int ckprime(int n, int d);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (ckprime(n, n - 1));
}

/**
 * ckprime - function check 4 prime number
 * @n: number
 * @d: divisor
 * Return: 1 prime
 */

int ckprime(int n, int d)
{
	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	return (ckprime(n, d - 1));
}

