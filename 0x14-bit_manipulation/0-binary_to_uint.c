#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <math.h>


unsigned int binary_to_uint(const char *b)
{
	int i, base_change = 1;
	unsigned int result = 0 ;
	
	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if( b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0')
		{
			result += base_change; 
		}
		base_change*= 2;
	}


	return (result);

}
