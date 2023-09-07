#include "main.h"
#include <stdio.h>


/**
 * main - a program that multiplies two positive numbers.
 * @mul: multiplication
 * @num1: 1st no
 * @num2: 2nd no
 * Return: 0
 */

/**
 * is_digit - check for digit char
 * @c: char
 * Return: c
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c);
}

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (i = 0 ; num1[i] != '\0' ; i++)
	{
		if (!is_digit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0 ; num2[i] != '\0' ; i++)
	{
		if (!is_digit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	mul = atoi(num1) * atoi(num2);

	printf("%d\n", mul);

	return (0);
}
