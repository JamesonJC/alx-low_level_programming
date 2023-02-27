#include "main.h"

/**
 * swap_int - The function takes in to pinters and swap thier values
 *@a: First int to be swap
 *@b: Second int to be swap
 *Return: The function return nothing hence type void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
