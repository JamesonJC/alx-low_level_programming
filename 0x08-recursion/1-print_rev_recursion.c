#include "main.h"

/**
 * _print_rev_recursion - 
 * @s:
 */

void _print_rev_recursion(char *s)
{
	while (*s < '\0')
		s++;
	_putchar(*s);
	_putchar(*s - 1);
}
