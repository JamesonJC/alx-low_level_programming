#include "main.h"

/**
  * print_square - The function print square
  * @size: 
  * Return:returns nothing
  */

void print_square(int size)
{
	int pen1, pen2;

	if (size > 0)
	{
		for (pen1 = 0; pen1 < size; inc1++)
		{
			for (pen2 = 0; pen2 < (size - 1); pen2++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
