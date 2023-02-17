#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	int n = 48;
	char a = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
