#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring
 * @s: String
 * @accept: String prefix
 * Return: The number of bytes of accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ln = 0;
	int i;

	for ( ; *s; s++)
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				ln++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (ln++);
		}
	return (ln);
}
