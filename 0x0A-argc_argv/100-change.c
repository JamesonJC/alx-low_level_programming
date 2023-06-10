#include "main.h"

/**
 * main - Function start the program execution.
 * @argc: Number of commands arguments.
 * @argv: Values of the commands arguments.
 * Return: Return 0 on success.
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int amount, min_c_change, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	min_c_change = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			min_c_change++;
			amount = amount - coins[i];
		}
	}
	printf("%d\n", min_c_change);

	return (0);
}
