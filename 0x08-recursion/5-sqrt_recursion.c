#include "main.h"

/**
 * _sqrt_recursion - Natural square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}

/**
 * _square_root - add one/extra input to the function to be able to search the
 * perfect square root of the number
 * @n: number
 * @i: int number calculate the product of itself
 * Return: square root, if not having natural sqrt (-1)
 */

int _square_root(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	else if (sq == n)
		return (i);
	else
		return (_sguare_root(n, i + 1));
}
