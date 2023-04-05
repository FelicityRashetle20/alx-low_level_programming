#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * returns NULL if malloc.
 */
int *array_range(int min, int max)
{
	int *array;
	int x;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		array[x] = min;

	return (array);
}
