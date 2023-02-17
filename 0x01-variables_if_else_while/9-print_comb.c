#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;

		if (n != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
