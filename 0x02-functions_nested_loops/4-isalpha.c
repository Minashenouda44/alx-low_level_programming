#include "main.h"
#include <stdio.h>

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c : alphabetic character
 *
 * Return: 1 (Success) 0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
