#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned 
 *int.
 * @b: binary
 *
 * Return: unsigned intiger.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;
	int count, base_two;

	if (!b)
		return (0);

	y = 0;

	for (count = 0; b[count] != '\0'; count++)
		;

	for (count--, base_two = 1; count >= 0; count--, base_two *= 2)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		if (b[count] & 1)
			y += base_two;
	}

	return (y);
}
