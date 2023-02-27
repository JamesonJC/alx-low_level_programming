#include "main.h"

/**
 * _puts2 - The function prints the every other character of the str
 * @str: The string to be taken into the function
 */

void _puts2(char *str)
{
	int ln = 0, i = 0, j;
	char *str_v = str;

	while (*str_v != '\0')
	{
		str_v++;
		ln++;
	}
	i =  ln - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
