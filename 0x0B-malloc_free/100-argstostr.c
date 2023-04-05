#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char and NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *outArg;
	int x, y, z, ab;

	if (ac == 0)
		return (NULL);

	for (x = y = 0; y < ac; y++)
	{
		if (av[y] == NULL)
			return (NULL);

		for (z = 0; av[y][z] != '\0'; z++)
			x++;
		x++;
	}

	outArg = malloc((x + 1) * sizeof(char));

	if (outArg == NULL)
	{
		free(outArg);
		return (NULL);
	}

	for (y = z = ab = 0; ab < x; z++, ab++)
	{
		if (av[y][z] == '\0')
		{
			outArg[ab] = '\n';
			y++;
			ab++;
			z = 0;
		}
		if (ab < x - 1)
			outArg[ab] = av[y][z];
	}
	outArg[ab] = '\0';

	return (outArg);
}
