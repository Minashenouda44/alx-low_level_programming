#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *seperator = "";
	va_list args;

	va_start (args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", seperator, string);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}




