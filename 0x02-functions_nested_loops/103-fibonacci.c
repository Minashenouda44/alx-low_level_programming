#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long f = 0, s = 1, n, es;

	while (es <= 4000000)
	{
		n = f + s;
		f = s;
		s = n;

		if (n % 2 == 0)
			es += n;

	}

	printf("%ld", es);

	return (0);
}
