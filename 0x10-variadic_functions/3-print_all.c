#include "stdio.h"
#include "stdarg.h"
#include "variadic_functions.h"

/**
  * print_all - prints anything that is paased to it
  * @format: list of types of arguments 
 */

void print_all(const char * const format, ...)
{
	va_list va_list_Ptr;
	unsigned int i, j, k;
	char *s;
	const char t_arg[] = "cifs";

	va_start(va_list_Ptr, format);

	i = 0;
	k = 0;
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(va_list_Ptr, int));
				k = 1;
				break;
			case 'i':
				printf("%d", va_arg(va_list_Ptr, int));
				k = 1;
				break;
			case 'f':
				printf("%f", va_arg(va_list_Ptr, double));
				k = 1;
				break;
			case 's':
				s = va_arg(va_list_Ptr, char *);
				k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n");

	va_end(va_list_Ptr);
}
