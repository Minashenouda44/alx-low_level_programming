#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f = 0, s = 1, n, es = 0;

	while (1)
	{
		n = f + s;
		f = s;
		s = n;

		if (es > 4000000)
			break;

		if (n % 2 == 0)
			es += n;

	}

	printf("%ld\n", es);

	return (0);
}
