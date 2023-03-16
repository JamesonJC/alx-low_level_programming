#include <stdio.h>
#include <stdlib.h>

int digi(char *s);


/****/

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

int digi(char s)
{
	int n = s - '0';

	if (n < 0 || n > 9)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	return (n);
}
