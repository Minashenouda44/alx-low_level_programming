#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0' ; x <= '7' ; x++)
	{
		for (y = x + 1 ; y <= '8' ; y++)
		{
			for (z = y + 1 ; z <= '9' ; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x == '7' && y == '8' && z == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
