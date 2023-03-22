#include "function_pointers.h"

/**
 * print_name -  The function call for another function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
