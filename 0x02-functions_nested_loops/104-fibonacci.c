#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long long f = 1, s = 2, n = 0;

	printf("%lld, %lld, ", f, s);

	for (i = 2 ; i < 98 ; i++)
	{
		n = f + s;

		printf("%lld", n);

		f = s;
		s = n;

		if (i < 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}

