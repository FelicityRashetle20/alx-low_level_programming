#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index.
 * @n: pointer of an unsigned long int
 * @index: index of the bit starting from zero
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ran;

	if (index > 63)
		return (-1);

	ran = 1 << index;

	if (*n & ran)
		*n ^= ran;

	return (1);
}
