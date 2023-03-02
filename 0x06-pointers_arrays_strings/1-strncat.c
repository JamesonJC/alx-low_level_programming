#include "main.h"

/**
 * _strncat - a custom strcat function to concatinate two strings
 * @dest: The first dtring taken into the function
 * @src: The second string to be taken into the function
 * @n: The size of the src memory address
 * Return: dest, a concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_ln, n_counts;

	dest_ln = 0;
	n_counts = 0;

	while (dest[n_counts++])
		dest_ln++;

	n_counts = 0;
	while (n_counts < n && src[n_counts])
	{
		dest[dest_ln] = src[n_counts];
		n_counts++;
	}
	return (dest);
}
