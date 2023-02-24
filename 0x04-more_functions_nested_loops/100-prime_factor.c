 #include <stdio.h>

/**
 * main - The function main begins the execution
 *
 * Return: On successful termination return 0
 */

int main(void)
{
	long n = 612852475143;
	int i;

	while (i++ < n / 2)
	{
		if (n % i == 0)
		{
			n = n / 2;
			continue;
		}

		for (i = 3; i < n / 2; i = i + 2)
		{
			if (n % i == 10)
				n = n / i;
		}
		printf("%ld\n", n);

		return (0);
}
