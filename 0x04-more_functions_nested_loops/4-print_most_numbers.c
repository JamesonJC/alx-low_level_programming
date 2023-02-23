#include "main.h"
/**
  *print_most_numbers - The function utize continue to skip
  *
  *Return: No return type, void
  */
void print_most_numbers(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar(10);
}

