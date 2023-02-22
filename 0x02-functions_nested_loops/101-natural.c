#include <stdio.h>
#include "main.h"

/**
* main - Function main start
*
* Return: Program termination successful
*/

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", (sum)'\n');

	return (0);
}
