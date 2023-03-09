#include "main.h"

/******/

int factorial(int n)
{
	int fact_of = n;

	if (n < 0)
		return (-1);
	else if (0 <= n <= 1 )
		return (1);
	fact_of  *= factorial(n - 1);

	return (fact_of);
}
