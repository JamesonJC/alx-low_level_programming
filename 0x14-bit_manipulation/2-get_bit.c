#include "main.h"

/**
 * get_bit - Get a value of a bit at a given index
 * @n: The integer value to get a bit from
 * @index: Position of a bit
 * Return: A bit 1 or 0 and or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*
	 * Checking if index is not more than the 64 bits range
	 * returning 1 if so
	 */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*
	 * shifting n index times to the right, applying AND, and
	 * returnig the value
	 */
	return (n >> index & 1);
}
