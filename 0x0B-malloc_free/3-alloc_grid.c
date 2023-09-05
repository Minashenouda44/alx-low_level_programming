#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **g;

	if (width <= 0 || height <= 0)
		return (0);

	g = malloc(height * sizeof(int));

	if (g == NULL)
		return (0);

	for (i = 0 ; i < height ; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(g[j]);
			}
			free(g);
			return (0);
		}
		for (j = 0 ; j < width ; j++)
			g[i][j] = 0;
	}
	return (g);
}
