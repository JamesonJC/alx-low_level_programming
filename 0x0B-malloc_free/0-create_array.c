#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Array of chars
 * @size: array size
 * @c: charater to initial the array
 * Return: NULL if size is zero or if it fails or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *aPtr;
	unsigned int i;

	aPtr = (char *) malloc(size * sizeof(char) + 1);

	if (size == 0 || aPtr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		aPtr[i] = c;

	return (aPtr);
}
