#include "main.h"

/**
 * char *_strncpy - The function copy the string pointed
 * @dest: The string is copied into this pointer
 * @src: The string is copied from this pointer
 * @n: memory address length
 * Return: The function returns a string copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  ln = 0, i;

	while (src[i++])
	{
		ln++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = ln; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
