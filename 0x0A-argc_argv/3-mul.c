#include "main.h"

/**
 * main - The program execution start.
 * @ac: Agument commands counts.
 * @av: Agument commands values.
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int multi_res = 0;

	if (ac == 3)
	{
		multi_res = atoi(av[1]) * atoi(av[2]);
		printf("%d\n", multi_res);
	} else
		puts("Error");
	return (0);
}
