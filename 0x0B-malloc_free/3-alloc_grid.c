#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: input one
 * @height: input two
 * Return: string or NULL
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int) * height);
	if (i == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		i[x] = malloc(sizeof(int) * width);
			if (i[x] == NULL)
			{
				for (; x >= 0 ; x--)
					free(i[x]);
				free(i);
				return (NULL);
			}
	}
	for (x = 0 ; x < height; x++)
	{
		for (y = 0; y < width; y++)
			i[x][y] = 0;
	}
	return (i);
}
