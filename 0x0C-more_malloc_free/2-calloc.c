#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: elements of an array
 * @size: size of an array
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aPtr = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	aPtr = malloc(nmemb * size);

	if (aPtr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		aPtr[i] = 0;
		i++;
	}

	return (aPtr);
}
