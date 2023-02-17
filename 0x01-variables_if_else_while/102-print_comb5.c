#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar(a / 10 + 'o');
				putchar(a % 10 + 'o');
				putchar(' ');
				putchar(b / 10 + 'o');
				putchar(b % 10 + 'o');
				if (!(a == 98 || b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
