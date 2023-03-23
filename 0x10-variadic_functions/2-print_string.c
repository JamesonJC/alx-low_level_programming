#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Output a string and a new line
 * @separator: separate the printed strings
 * @n: Total number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list slstPtr;
	char *s;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

		if(!s)
			print("(nil)");
		else
			print("%s", s);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
