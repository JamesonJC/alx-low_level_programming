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
	long int mul = 0, num1 = atoi(argv[1]), num2 = atoi(argv[2]);

	if ( argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	mul = num1 * num2;

	printf("%ld\n", mul);

	return (0);
}
