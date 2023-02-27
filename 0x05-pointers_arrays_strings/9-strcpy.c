#include "main.h"

/**
 * char *_strcpy - The function copy the string pointed
 * @dest: The string is copied into this pointer
 * @src: The string is copied from this pointer
 * Return: The function returns a string copy
 */

char *_strcpy(char *dest, char *src)
{
	int  ln = 0, i;

	while (*(src + ln) != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i++)
	{
		dest[i] = src[i];
	}
	dest[ln] = '\0';

	return (dest);
}
