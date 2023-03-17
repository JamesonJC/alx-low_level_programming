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
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	sPtr = malloc(strlen(s1) + n + 1);

	if (!sPtr)
		return (NULL);

	for (i = 0; i < (strlen(s1) + n); i++)
		if (i < strlen(s1))
			sPtr[i] = s1[i];
		else
			sPtr[i] = s2[i];
	sPtr[++i] = '\0';

	return (sPtr);
}
