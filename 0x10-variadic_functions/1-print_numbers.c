#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: separator
 * @n: arg numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator && i <= n - 2)
			printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}

