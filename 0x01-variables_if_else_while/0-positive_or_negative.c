#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main function begins
 *
 * declaration and initialization of variable n, and output
 * Return: program termination successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*My code below*/
	printf("%d ", n);
	if (n > 0)
		printf("is positive");
	if (n == 0)
		printf("is zero");
	if (n < 0)
		printf("is negetive");

	return (0);
}
