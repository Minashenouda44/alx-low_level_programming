#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always: 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0' ; x <= '98' ; x++)
	{
		for (y = x + 1 ; y <= '99' ; y++)
		{
			putchar(x / 10);
			putchar(x % 10);
			putchar(' ');
			putchar(y / 10);
			putchar(y % 10);

			if (x == '98' && y == '99')
			{
				putchar('/n')
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
