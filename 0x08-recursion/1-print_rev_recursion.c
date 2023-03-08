#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: input string to the function
 */

void _print_rev_recursion(char *s)
{
	if (*s < '\0')
	{
		s++;
		_putchar(*s - 1);
	}
}
