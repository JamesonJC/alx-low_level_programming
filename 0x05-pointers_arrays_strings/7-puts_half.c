#include "main.h"

/**
 * puts_half - The function prints the half of a string
 * @str: The string that goes in the function
 */

void puts_half(char *str)
{
	int ln = 0, i, n;

	for (i = 0; str[i] != '\0'; i++)
		ln = ln + 1;
	n = ln / 2;

	if ((ln % 2) == 1)
		n = ((ln + 1) / 2 );
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
