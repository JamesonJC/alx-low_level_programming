#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concantinates
 * @s1: first string
 * @s2: second string
 * Return: NULL of failer, Pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *sPtr;
	unsigned long int tot_strln;
	int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tot_strln = strlen(s1) + strlen(s2);
	sPtr = (char *) malloc(tot_strln * sizeof(char) + 1);

	if (sPtr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		sPtr[k++] = s1[i];

	for (j = 0; s2[j]; j++)
		sPtr[k++] = s2[j];

	return (sPtr);
}
