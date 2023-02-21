#include <stdio.h>
/**
* print_alphabet - Function that holds the code that prints alphabets
*the funvtion is void,returns nothing
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
