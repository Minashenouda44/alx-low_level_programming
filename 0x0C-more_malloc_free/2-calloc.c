#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: elements
 * @size: bytes
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = calloc(nmemb, size);

	if (m == 0)
		return (NULL);

	return (m);
}
