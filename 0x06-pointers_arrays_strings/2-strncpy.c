#include "main.h"

/**
 * _strncpy - a custom strncpy function to copy a string
 * @dest: The first string taken into the function
 * @src: The second string taken into the function
 * @n: The size of the src memory address
 * Return: dest, a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ln;

	ln = 0;
	while (ln < n && src[ln] != '\0')
	{
		dest[ln] = src[ln];
		ln++;
	}
	for ( ; ln < n; ln++)
		dest[ln] = '\0';

	return (dest);
}
