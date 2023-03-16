#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - allocates memory 
 * @b: value to be allcated memory for
 * Return: pointer to newly allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mPtr = malloc(b);

	if (mPtr == NULL)
		exit(98);

	return (mPtr);
}
