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
	int i, bytes;
	int (*location)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (bytes == 0)
	{
		printf("\n");
		return (0);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", *(unsigned char *)location);

		if (i == bytes - 1)
			continue;
		printf(" ");
		location++;
	}
	printf("\n");
	return (0);
}
