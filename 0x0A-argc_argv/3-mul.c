#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program execution start
 * @argc: Agument commands counts
 * @argv: Agument commands values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(*argv + 1) * atoi(*argv + 2));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
