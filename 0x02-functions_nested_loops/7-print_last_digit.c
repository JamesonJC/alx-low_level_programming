#include "main.h"
/**
*print_last_digit - Function find the end digit of a number and print
*@n: The function takes a single argument int n
*Return: The generated  value of the last digit
*/

int print_last_digit(int n)
{
	if (n > 0)
		n = (n % 10);
	if (n < 0)
		n = -(n % 10);

	_putchar(n + '0');
	return (n);
}
