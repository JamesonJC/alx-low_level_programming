#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Output the numbers
 * @separator:n separate the printed numbers
 * @n: Total number of arguments passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numsPtr;
	unsigned int i;

	va_start(numsPtr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
