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
	int i, j, k;
	unsigned int ln;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";

	ln = n;
	for (k = 0; s1[k]; k++)
	{
		ln++;/*
		if (n >= strlen(s2))
		{
			ln = n;
			for (k = 0; s2[k]; k++)
				ln++;
		}*/
	}

	sPtr = malloc(sizeof(char) * (ln + 1));

	if (sPtr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i]; i++)
		sPtr[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		sPtr[j++] = s1[i];

	return (sPtr);
}
