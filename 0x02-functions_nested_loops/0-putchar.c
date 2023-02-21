#include <stdio.h>
#include "main.h"
/**
* _putchar - Function definition for codes for printing char
*
* Return: Succesful termination
 */
void  _putchar(void)
{
	char _putc[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(_putc[i]);
	}
	putchar('\n');

}
