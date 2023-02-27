#include "main.h"

/**
 * char *_strcpy - The function copy the string pointed
 * @dest: The string is copied into this pointer
 * @src: The string is copied from this pointer
 * Return: The function returns a string copy
 */

int *_strcpy(char *dest, char *src)
{
	int  ln = 0, i;

	while (*(src + 1) != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; ln++)
	{
		dest[i] = src[i];
	}
	dest[1] = '\0';

	return (dest);
}
