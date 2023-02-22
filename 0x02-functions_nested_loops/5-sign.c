#include "main.h"

/**
* print_sign - Function checks a sign of a value and print it
*@n: The takes integer an int value
* Return: It Returns either a 1, 0, or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	} else if (n < 0)
	{
		_putchar('-');
		return(-1);
	} else
	{
		_putchar(48);
		return(0);
	}
}
