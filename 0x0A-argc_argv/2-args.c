#include <stdio.h>

/**
 * main - The program execution start
 * @argc: Agument commands counts
 * @argv: Agument commands values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
