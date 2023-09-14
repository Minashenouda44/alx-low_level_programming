#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *s;
	va_list args;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
