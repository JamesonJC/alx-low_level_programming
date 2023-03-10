#include "main.h"

/**
 * wildcmp - checks if the strings are identical
 * @s1: string one
 * @s2: string two
 * Return: integer 1 if string are identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s1 == *s2)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
