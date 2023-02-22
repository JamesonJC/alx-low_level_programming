#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - The function print integer numbers up to 98
 *@n: The function start to print from n number
 *Th is void thus return no value nor anything
*/

void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if ( i == 98)
				printf("%d\n", i);
		}
	} else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
