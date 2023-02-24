#include "main.h"

/**
  * print_line - Draw a straight line
  * @n:The lenth of the line
  * Return: No return type or does not return anything
  */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
