#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary numbers to int with no sign.
 * @b: Pointer to a string with binary numbers
 * Return: base 10 value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base10 = 0, ln = 0, base = 1;
	int pos = 0;

	if (*b == '\0')
		return (0);

	ln = strlen(b);

	for (pos = (ln - 1); pos >= 0; pos--)
	{
		if (b[pos] != '1' && b[pos] != '0')
			return (0);

		if (b[pos] == '1')
			base10 += base;
		base *= 2;
	}

	return (base10);
}
