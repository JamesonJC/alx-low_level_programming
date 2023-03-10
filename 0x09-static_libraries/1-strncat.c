#include "main.h"

/**
 * _strncat - a custom strcat function to concatinate two strings
 * @dest: The first string taken into the function
 * @src: The second string taken into the function with n length
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
	for (n_counts = 0; n_counts < n && src[n_counts]; n_counts++)
	{
		dest[dest_ln++] = src[n_counts];
	}
	return (dest);
}
