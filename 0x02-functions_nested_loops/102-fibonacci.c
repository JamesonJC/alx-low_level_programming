#include <stdio.h>
#include "main.h"

/**
* main - Function start the execution of the program
*
* Return: Successful termination 
*/

int main(void)
{
	int a, b, sum, tot;

	a = 1;
	b = a + 1;
	sum = a + b;

	printf("%d, %d, ", a, b);
	for (tot = 1; tot <= 50; tot++)
	{
		printf("%d", sum);
		a = b;
		b = sum;
		sum = a + b;
		if (sum <= 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
