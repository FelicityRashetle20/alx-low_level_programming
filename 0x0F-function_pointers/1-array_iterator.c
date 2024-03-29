#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: input array
 * @size: array size
 * @action: pointer function
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array && action)
		for (z = 0; z < size; z++)
			action(array[z]);
}
