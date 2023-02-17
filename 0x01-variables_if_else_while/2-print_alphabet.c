#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	char c = 'a';

	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
