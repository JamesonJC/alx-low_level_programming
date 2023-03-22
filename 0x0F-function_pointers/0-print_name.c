#include "function_pointers.h"

/**
 * print_name -  The function call for another function to print name
 * @name: name of a person
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return (1);
	f(name);
}
