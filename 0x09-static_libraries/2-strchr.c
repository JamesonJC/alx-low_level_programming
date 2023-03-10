#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character on a string s
 * @s: string to get characters on
 * @c: The char to be loctaed in a string
 * Return: pointer to c's first occurance in s, null if c is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
