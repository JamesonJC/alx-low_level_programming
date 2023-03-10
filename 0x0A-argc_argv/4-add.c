#include <stdio.h>
#include <stdlib.h>

int numeric(char *s);

/**
 * main - The program execution start
 * @argc: Agument commands counts
 * @argv: Agument commands values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int addi = 0, i;

	for (i = 0; i < argc; i++)
	{
		if (numeric(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		addi += atoi(argv[i]);
	}
	printf("%d\n", addi);

	return (0);
}

/**
 * numeric - checks if inpute is a numeric
 * @s: string inpute
 * Return: 1 if numeric, 0 if not
 */

int numeric(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
