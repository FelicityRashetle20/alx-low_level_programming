#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * status value is equal to 98 if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *outStr;
	unsigned int stringL1, stringL2, loutStr, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (stringL1 = 0; s1[stringL1] != '\0'; stringL1++)
		;

	for (stringL2 = 0; s2[stringL2] != '\0'; stringL2++)
		;

	if (n > stringL2)
		n = stringL2;

	loutStr = stringL1 + n;

	outStr = malloc(loutStr + 1);

	if (outStr == NULL)
		return (NULL);

	for (x = 0; x < loutStr; x++)
		if (x < stringL1)
			outStr[x] = s1[x];
		else
			outStr[x] = s2[x - stringL1];

	outStr[x] = '\0';

	return (outStr);
}
