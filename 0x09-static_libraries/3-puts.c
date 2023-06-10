#include "main.h"

/**
 *_puts - The function print the string, and a new line after th str
 *@str: The string taken by the function as the parameter
 */

void _puts(char *str)
{
	int ln = 0;

	while (str[ln] != '\0')
	{
		_putchar(str[ln]);
		ln++;
	}
	_putchar('\n');
}
