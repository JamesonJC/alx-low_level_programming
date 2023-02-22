#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Function print a up to z in 10 lines
*the funvtion is void,is returns nothing
*/
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
