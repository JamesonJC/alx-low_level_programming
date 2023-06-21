#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  Takes in a function and a string to print name in string.
 * @name: The name to be printed/passed in the function f
 * @f: A function pointer to a function taking a string on argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		exit(1);
	(*f)(name);
}
