#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *outStr;
	unsigned int l, m, n, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	for (m = 0; s2[m] != '\0'; m++)
		;

	outStr = malloc(sizeof(char) * (l + m + 1));

	if (outStr == NULL)
	{
		free(outStr);
		return (NULL);
	}

	for (n = 0; n < l; n++)
		outStr[n] = s1[n];

	limit = m;
	for (m = 0; m <= limit; n++, m++)
		outStr[m] = s2[m];

	return (outStr);
}
