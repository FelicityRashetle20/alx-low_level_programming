#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *outStr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	outStr = (char *)malloc(sizeof(char) * (i + 1));

	if (outStr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		outStr[j] = str[j];

	return (outStr);
}
