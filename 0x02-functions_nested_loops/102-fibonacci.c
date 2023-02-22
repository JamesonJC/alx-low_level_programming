#include <stdio.h>
#include "main.h"

/**
* main - Function start the execution of a program
*
* Return: Successful termination
*/

int main(void)
{
	long int a, b, sum;
	int tot;

	a = 1;
	b = a + 1;
	sum = a + b;

	printf("%ld, %ld, ", a, b);
	for (tot = 2; tot < 50; tot++)
	{
		printf("%ld", sum);
		a = b;
		b = sum;
		sum = a + b;
		if (sum < 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
