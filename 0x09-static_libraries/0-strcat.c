#include "main.h"

/**
 * _strcat - a custom strcat function to concatinate two strings
 * @dest: The first dtring taken into the function
 * @src: The second string to be taken into the function
 * Return: dest, a concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ln = 0;

	while (dest[ln] != '\0')
		ln++;
	while (src[i] != '\0')
	{
		dest[ln] = src[i];
		ln++;
		i++;
	}
	return (dest);
}
