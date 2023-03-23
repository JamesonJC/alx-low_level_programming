#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function for operation
 * @s: Operator passed to the function
 * Return: Pointer to correct function for the operations
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (!ops[i].op && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
