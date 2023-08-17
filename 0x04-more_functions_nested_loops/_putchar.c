#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 *
 * @c: the character to print
 *
 * Return: on success 1.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
