#include "main.h"

/**
 * print_rev - The function print a string in reverse
 * @s: The parameter of the function
 */
void print_rev(char *s)
{
	int i, ln = 0;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	s--;
	for (i = ln; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
