#include <stdio.h>
#include "main.h"

/**
 * print_array - The function prints array elemets
 * @a: The array to be taken in the function
 * @n: total number of the elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
