#include "main.h"
/**
 *print_alphabet - Function to print all the lower case aphabets
*/

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	putchar('\n');
}
