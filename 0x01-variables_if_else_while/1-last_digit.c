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
	l = n % 10;
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l);
	if (l == 0)
		printf("Last didgit of %d id %d and is ", n, l);
	if (l < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);

	return (0);
}
