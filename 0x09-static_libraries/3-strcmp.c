#include "main.h"

/**
 * _strcmp - The function compare two strings
 * @s1: point to a first string
 * @s2: point to a second string
 * Return: The integer deffrence between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int def_v, i = 0;

	while ((s1[i] &&  s2[i]) && s1[i] == s2[i])
		i++;
	def_v = s1[i] - s2[i];
	return (def_v);
}
