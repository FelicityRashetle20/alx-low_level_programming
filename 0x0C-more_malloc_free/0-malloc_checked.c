#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * status value is equal to 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	char *q;

	q = malloc(b);
	if (q == NULL)
		exit(98);
	return (q);
}
