#include <stdio.h>

/**
 * main - Function main start
 * variables - initialization
 *
 * printf - Displaying the sizes of variable
 * Return: Succesful termination
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a float: %lu byte(s)\m", (unsigned long)sizeof(f));
	return (0);
}
