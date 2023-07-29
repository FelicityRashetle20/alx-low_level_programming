#include "main.h"

/**
 * get_endianness - funtion that checks the endianness
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int numOne;
	char *charOne;

	numOne = 1;
	charOne = (char *) &numOne;

	return ((int)*charOne);
}
