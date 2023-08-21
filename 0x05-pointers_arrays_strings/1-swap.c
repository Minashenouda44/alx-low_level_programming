#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a : 1st input
 * @b : 2nd input
 * return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
