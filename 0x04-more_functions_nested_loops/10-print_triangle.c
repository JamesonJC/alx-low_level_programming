#include "main.h"

/**
  * print_triangle - The function draws a triangle
  * @size: Takes in the size of the triangle as variable size
  * Return: No return type, void
  */

void print_triangle(int size)
{
	int pen1, pen2;

	if (size > 0)
	{
		for (pen1 = 1; pen1 <= size; pen1++)
		{
			for ((pen2 = size - pen1); pen2 > 0; pen2--)
				_putchar(' ');

			for (pen2 = 0; pen2 < pen1; pen2++)
				_putchar('#');

			if (pen1 == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
