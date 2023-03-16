#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function concantinates strings
 * @s1: first string
 * @s2: second string
 * @n: size of the memory
 * Return: NULL of failer, Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sPtr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	sPtr = malloc(strlen(s1) + n + 1);

	if (sPtr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i]; i++)
		sPtr[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		sPtr[j++] = s1[i];
	j++;
	sPtr[j++] = '\0';

	return (sPtr);
}
