#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - execute a fuction that searches an integer
 * @array: array received by our function
 * @size: the size of the array
 * @cmp: a function that is executed as parameter
 * Return:The index of the serched int or 0 on failer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return(-1);

	for ( ; i < size; ++i)
	{
		if (!array || !cmp)
			return (-1);

		else if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
