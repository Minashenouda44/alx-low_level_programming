#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
