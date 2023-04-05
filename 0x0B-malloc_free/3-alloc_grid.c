#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -a function that returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **outGrid;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	outGrid = malloc(height * sizeof(int *));
	if (outGrid == NULL)
	{
		free(outGrid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		outGrid[x] = malloc(width * sizeof(int));
		if (outGrid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(outGrid[x]);
			free(outGrid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			outGrid[x][y] = 0;

	return (outGrid);
}
