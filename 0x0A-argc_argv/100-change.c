#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins change
 * @argc: int
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money;
	int change = 0;
	int i;

	int cents [5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 ; i++)
	{
		while (money >= cents[i])
		{
			money -= cents[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
