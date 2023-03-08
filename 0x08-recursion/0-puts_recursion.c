#include "main.h"

/**
 * _puts_recursion - tranverse a string printing char by char,
 * and a new line at the end
 * @s: String inpute to the function
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);

	_putchar('\n');
}
