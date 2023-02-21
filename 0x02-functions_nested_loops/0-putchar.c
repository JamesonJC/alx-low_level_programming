#include <stdio.h>
/**
* main - Function main start
*
* Return: Succesful termination
 */
int main(void)
{
	char _putchar[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(_putchar[i]);
	}
	putchar('\n');

	return (0);
}
