#include <stdio.h>
#include <stdlib.h>

/**
 * main - start the execution
 * @argc: total number of argiments
 * @argv: argument values
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	unsigned long int mul = 0, num1, num2;
	int i, j;

	if ( argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	for ( i = 2; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				fprintf(stderr, "Error\n");
				exit(98);
			}
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%lu\n", mul);

	return (0);
}
