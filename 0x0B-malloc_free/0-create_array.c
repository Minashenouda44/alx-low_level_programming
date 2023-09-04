#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: constant char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	p = malloc(size * sizeof(char));

	if (size == 0)
		return (0);

	int i;

	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}

	return (p);
}
