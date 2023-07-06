#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function converts a str representation binary to dec
 * @b: Pointer pointing to the string character at index 0
 * Return: The integer value which is base 10 of the binary converted
 */


unsigned int binary_to_uint(const char *b)
{
	int i, base_change = 1;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0')
		{
			result += base_change;
		}
		base_change *= 2;
	}
	return (result);
}
