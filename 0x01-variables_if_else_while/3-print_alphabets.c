#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
