#include "main.h"

/**
 * _memset - write a consant byte into a memory
 * @s: Memory buffer
 * @b: Constant byte
 * @n: Memry address size
 * Return: Pointer to memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
