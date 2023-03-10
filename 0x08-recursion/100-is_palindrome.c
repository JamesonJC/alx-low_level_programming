#include "main.h"
#include <string.h>

int _palindrome(char *s, int ln, int i);

/**
 * _strlen - calcylate the lenth of the string
 * @s: sreing
 * Return: string length value
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - returns 0 or 1 for palidrome respectively
 * @s: string input to the function
 * Return: 0  if string is palidrome or 1 if is not.
 */

int is_palindrome(char *s)
{
	int i;
	int ln;

	i = 0;
	ln = _strlen(s);

	if (!(*s))
		return (1);

	return (_palindrome(s, ln, i));
}

/**
 * _palindrome  -  checks for palidrome
 * @s: string
 * @ln: legnth of the string
 * @i: indexing on the string
 * Return: 0 or 1
 */

int _palindrome(char *s, int ln, int i)
{

	if (s[i] == s[ln / 2])
		return (1);
	if (s[i] == s[ln - i - 1])
		return (_palindrome(s, ln, i + 1));
	return (0);
}
