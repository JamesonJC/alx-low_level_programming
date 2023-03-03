#include "main.h"

/**
 * print_number - Output an integer
 * @n:  for outputed int value
 */

void print_number(int n)
{
	unsigned long int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -(number);
	}

	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
