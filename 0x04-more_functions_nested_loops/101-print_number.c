 #include "main.h"

/**
 * print_number - The function print a number
 * @n: The number accepted by the function to be printed
 * Return: No return value, void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
