#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n : number
 *
 * Return: 0 success
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

