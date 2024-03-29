#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * characters and initializes it with a specific char.
 * @size: Array size
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *rt;
	unsigned int z;

	if (size == 0)
		return (NULL);

	rt = malloc(sizeof(c) * size);

	if (rt == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		rt[z] = c;

	return (rt);
}
