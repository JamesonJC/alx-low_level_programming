#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Pointer to a newly allocated memory
 * @str: string to be copied into the allocated memory
 * Return: NULL if str = NULL or memory unavailale or pointer
 */
char *_strdup(char *str)
{
	char *sPtr;
	unsigned long int i;

	sPtr = (char *) malloc(strlen(str) * sizeof(char) + 1);

	if (sPtr == NULL || *str == '\0')
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		sPtr[i] = str[i];

	return (sPtr);

}
