#include "main.h"

/**
 * is_prime_number - returns the the integer value
 * @n: input integer
 * Return: i if prime, or 0 if not
 */

int is_prime_number(int n)
{
	int i = n;

	if (n <= 1)
		return (0);

	return (prime_calc_recur(int n, int i));
}

/**
 * prime_calc_recur - Checks if the number is prime
 * @n: The number to be checked
 * @i: iteraton between the int numbers
 * Return: 1 if number is prime or 0 if not prime
 */

int prime_calc_recur(int n, int i)
{
	i = n / 2;
	if (i <= 1)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (prime_calc_recur(n, i - 1));
}
