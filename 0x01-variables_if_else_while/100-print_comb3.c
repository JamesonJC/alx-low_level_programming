#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	int j;
	int k;

	for (j = 48; j <= 56; j++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > j)
			{
				putchar(j);
				putchar(k);

				if (j != 56 || k != 57)
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
