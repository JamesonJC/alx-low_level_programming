#include "main.h"
/**
  *more_numbers - Function print ten times numbers 0-14
  *
  *Return: No return type, void
  */
void more_numbers(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			o = n;
			if (n > 9)
			{
				_putchar('1');
				o = n % 10;
			}
			_putchar('0' + o);
		}
		_putchar('\n');
	}
}

