#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *ptr = (char *)main;
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0 ; i < number_of_bytes ; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");

	return (0);
}
