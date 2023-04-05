#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array.
 * @size: size of array
 * @cmp: pointer to the function to be used
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (z = 0; z < size; z++)
			if (cmp(array[z]))
				return (z);
	}
	return (-1);
}
