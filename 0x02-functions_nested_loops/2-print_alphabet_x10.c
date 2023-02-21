#include <stdio.h>
/**
* print_alphabet - Function that holds the code that prints alphabets
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
			putchar(b);
		}
		putchar('\n');
	}
}
