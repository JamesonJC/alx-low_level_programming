#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: pointer to the array
 * @size: size of the array
 * @action: a function to be executed as a parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		if (!action)
			exit(1);

		action(array[i]);
	}
}
