#include "main.h"

/**
  * print_square - The function print square
  * @size: The parameter value of the size of the square
  * Return:returns nothing
  */

void print_square(int size)
{
	int pen1;
	int pen2;

	pen1 = 0;

	while (size > 0  && size > pen1)
	{
		pen2 = 0;
		while (pen2 < size)
		{
			_putchar('#');
			pen2++;
		}

		_putchar('\n');
		pen1++;
	}
	if (pen1 == 0)
		_putchar('\n');
}
