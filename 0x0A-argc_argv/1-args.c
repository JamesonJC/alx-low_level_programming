#include <stdio.h>

/**
 * main - The program execution start
 * @argc: Agument commands counts
 * @argv: Agument commands values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);

	return (0);
}
