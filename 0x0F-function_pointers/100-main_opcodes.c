#include <stdlib.h>
#include <stdio.h>

/**
 * main - program exe start, function prints opcodes
 * @argc: Total number of commands arguments
 * @argv: Values of commands arguments
 * Return: 0 on success or 1 , 2 on failure
 */

int main(int argc, char *argv[])
{
	int i, n_bytes;
	int (*opcodes)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = main;
	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", *(unsigned char *)opcodes);

		if (i == n_bytes - 1)
			continue;
		printf(" ");
		opcodes++;
	}
	printf("\n");
	return (0);
}
