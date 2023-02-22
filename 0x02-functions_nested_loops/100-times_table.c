#include <stdio>
#include "main.h"

/**
* print_times_table - Function that prints times table
* @n: The function takes integer n
* The function is void thus return nothing
*/

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; <= n; j++)
		{
			for (j = 0; j <= n; j++)
			{
				int mult = i * j;

				if (j == 0)
					_putchar('0');
				else if ( mult <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mult);
				} else if (mult > 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mult / 100));
					_putchar('0' + ((mult / 10) % 10));
					_putchar('0' + (mult % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mult / 10));
					_putchar('0' + (mult % 10));
				}
			}
			_putchar('\n');
		}
	}
}
