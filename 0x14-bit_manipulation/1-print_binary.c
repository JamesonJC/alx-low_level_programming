#include "main.h"

/**
 * print_binary - Converts binary numbers to int with no sign.
 * @n: The number to be represented as binary
 */

void print_binary(unsigned long int n)
{
	/* Checing if n is non-zero(can be right shifted by 0 bits)*/
	if (n >> 0)
	{
		/*If n can be right=shifted by 1 bit/ is >= 2*/
		if (n >> 1)
			print_binary(n >> 1);/*Recursive call*/
		/*Prints the least significant bit as character*/
		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');/*n is zero as cannot be right-shifted*/
}
