#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary numbers to int with no sign.
 * @b: Pointer to a string with binary numbers
 * Return: base 10 value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	/*diclaring initialing variable*/
	unsigned int base10 = 0, ln = 0, base = 1;
	int pos = 0;

	/*Checking if be is NULL and returning zero if so*/
	if (*b == '\0')
		return (0);

	ln = strlen(b);

	/*looping from the last char/bit in the string*/
	for (pos = (ln - 1); pos >= 0; pos--)
	{
		/*Checking if the char is 0 or 1, return is if not*/
		if (b[pos] != '1' && b[pos] != '0')
			return (0);

		/*Adding the base 10 value using base 2 multiple*/
		if (b[pos] == '1')
			base10 += base;
		base *= 2;
	}

	return (base10);
}
