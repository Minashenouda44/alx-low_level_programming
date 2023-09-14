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
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				 printf("%c", va_arg(args, int));
				 break;
			case 'i':
				 printf("%d", va_arg(args, int));
				 break;
			case 'f':
				 printf("%f", va_arg(args, double));
				 break;
			case 's':
				 s = va_arg(args, char *);
				 if (s)
					 printf("%s", s);
				 else if (!s)
					 printf("(nil)");

		}
		if ((format[i] == 'c' || format[i] == 'i' ||format[i] == 'f' || format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
