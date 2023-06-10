#include "main.h"

/**
 * main - The program execution start.
 * @argc: Agument commands counts.
 * @argv: Agument commands values.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 1, addi_res = 0;

	if (argc > 1)
	{
		for (; i != argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (0);
			}
			addi_res = addi_res + atoi(argv[i]);
		}

		printf("%d\n", addi_res);
	} else
		printf("%d\n", addi_res);
	return (0);
}
