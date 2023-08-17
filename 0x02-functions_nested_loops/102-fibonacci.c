#include <stdio.h>
/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/

int main(void)
{
	int i;
	unsigned long f = 0, s = 1, n;

	for (i = 0; i < 50; i++)
	{
		n = f + s;
		printf("%lu", n);
		f = s;
		s = n;

		if (i == 49)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
