#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0 ; i <= size - 1 ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
