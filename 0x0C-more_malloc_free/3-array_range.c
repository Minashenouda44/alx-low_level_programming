#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: m
 */

int *array_range(int min, int max)
{
	int *m;
	int i;
	int n;

	if (min > max)
		return (NULL);

	n = (min + max) / 2;

	m = malloc(sizeof(int) * (n + 1));

	if (m == 0)
		return (NULL);

	for (i = 0 ; i <= n ; i++)
	{
		m[i] = min;
		min++;
	}
	m[i] = '\0';

	return (m);
}
