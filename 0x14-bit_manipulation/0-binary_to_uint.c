#include <string.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	/*diclaring initialing variable*/
	unsigned int base10 = 0;
	int pos;

	/*Checking if be is NULL and returning zero if so*/
	if (*b == '\0')
		return (0);

	/*looping from the start char/bit in the string*/
	for (pos = 0; b[pos] != '\0'; pos++)
	{
		/*check if the bit on the position is zero and shift to next*/
		if (b[pos] == '0')
		{
			base10 = base10 << 1;
		}
		/*bit at position is 1 and sets the least significant to 1*/
		else if (b[pos] == '1')
		{
			base10 <<= 1;
			base10 |= 1;
		}
		/*return 0 if the value at position is not a bit*/
		else
			return (0);
	}
	return (base10);
}

