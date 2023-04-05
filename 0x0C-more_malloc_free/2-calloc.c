#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * returns NULL if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		pointer[x] = 0;

	return (pointer);
}
