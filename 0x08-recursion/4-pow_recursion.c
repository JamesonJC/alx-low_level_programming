#include "main.h"

/**
 * _pow_recursion - calculate the num to the power another number
 * @x: Base number
 * @y: Power number
 * Return: The results , error (-1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
