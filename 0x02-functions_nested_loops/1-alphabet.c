#include "main.h"
/**
 *print_alphabet - Function to print all the lower case aphabets
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
