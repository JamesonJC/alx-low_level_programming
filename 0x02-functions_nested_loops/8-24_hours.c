#include "main.h"
/**
*jack_baur - Function output every minutes of the day
*
*The finction is of type void returns nothing
*/

void jack_baur(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for(j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
