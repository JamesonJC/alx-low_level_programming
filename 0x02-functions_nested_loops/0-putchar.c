#include <stdio.h>
#include "main.h"
/**
* main - Function main start the program
*
* Return: Succesful termination
 */
int main(void)
{
	int i;
	char s_putc[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(s_putc[i]);
	}
	_putchar('\n');

	return (0);
}
