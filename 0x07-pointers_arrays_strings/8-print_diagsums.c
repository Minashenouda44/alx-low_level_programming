#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagsum1;
	int diagsum2;

	diagsum1 = 0;
	diagsum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		diagsum1 += a[i];
		diagsum2 += a[size - i - 1];
		a += size;
	}


	printf("%d, ", diagsum1);
	printf("%d\n", diagsum2);
}
