#include "main.h"

/**
 * _puts_recursion - tranverse a string printing char by char,
 * and a new line at the end
 * @s: String inpute to the function
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
