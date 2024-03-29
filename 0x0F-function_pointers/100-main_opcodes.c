#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int z, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (z = 0; z < nbytes; z++)
	{
		printf("%02x", opc[z] & 0xFF);
		if (z != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
