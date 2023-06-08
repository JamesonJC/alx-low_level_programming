#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  length of a string
 * @s: string input on the function
 * Return: length value
 */

int _strlen_recursion(char *s)
{
	int ln;

	ln = 0;
	if (*s != '\0')
	{
		ln++;
		ln = ln + _strlen_recursion(s + 1);
	}
	return (ln);
}
