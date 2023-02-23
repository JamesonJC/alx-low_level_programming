#include "main.h"
/**
  *more_numbers - Function print ten times numbers 0-14
  *
  *Return: No return type, void
  */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 13; m++)
		{
			if (m > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

