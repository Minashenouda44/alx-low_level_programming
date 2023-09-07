#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: u int
 * @new_size: u int
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		return (r);
	}
	if (new_size > old_size)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		for (i = 0 ; i < old_size && i < new_size ; i++)
			*((char *)r + i) = *((char *)ptr + i);
		free(ptr);
	}

	return (r);
}
