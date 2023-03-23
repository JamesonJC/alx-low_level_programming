#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function start the excution
 * @argc: Total number of commands arguments
 * @argv: Array of values of commands arguments
 * Return: 0 on succes, 1 on failures
 **/

int main(int argc, char *argv[])
{
	char *oPtr;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	oPtr = argv[2];

	if (get_op_func(oPtr) == NULL || oPtr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oPtr == '/' && n2 == 0) || (*oPtr == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oPtr)(n1, n2));

	return (0);
}
