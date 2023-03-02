#include "main.h"

/**
 * reverse_array - The function reverses the elements of an array
 * @a: array paramater
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, placeholder;

	for (i = 0; i < (n / 2); i++)
	{
		placeholder = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = placeholder;
	}
}
