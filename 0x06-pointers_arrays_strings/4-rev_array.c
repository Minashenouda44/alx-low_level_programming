#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 * @a: int array
 * @n: no of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	temp = a[0];

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
