#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	va_args(args, char *);

	va_end(args);
