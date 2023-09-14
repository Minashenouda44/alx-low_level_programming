#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator
 * @n: args numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		char *str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
