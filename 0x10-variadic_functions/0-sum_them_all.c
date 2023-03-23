#include "variadic_function.h"

/**
 * sum_them_all - sum all the value pass on the function
 * @n: Total number of the arguments passed
 * Return: Worked sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlstPtr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(vlstPtr, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(vlstPtr, int);

	va_end(vlstPtr);

	return (sum);
}


