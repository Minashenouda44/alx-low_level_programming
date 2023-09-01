#include "main.h"
#include <stdio.h>

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c : letter
 *
 * Return: 1 (Success) 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
