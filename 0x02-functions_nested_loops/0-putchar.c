#include <stdio.h>
#include "main.h"
/**
* main - Function main start the program
*
* Return: Succesful termination
 */
int main(void)
{
	char _putc[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(_putc[i]);
	}
	putchar('\n');

	return (0);
}
