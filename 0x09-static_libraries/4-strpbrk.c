#include "main.h"

/**
 * _strpbrk - string search for any set of bytes
 * @s: string cointaining set
 * @accept: string set
 * Return: pointer to matching bytes, null if not match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	return ('\0');
}
