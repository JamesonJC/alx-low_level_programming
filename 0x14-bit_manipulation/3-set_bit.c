#include "main.h"

/**
 * set_bit - Set a value of a bit to 1 at a given index
 * @n: Pointer to a string with binary numbers
 * @index: The position at which the bit is set to 1
 * Return: 1 on success, and -1 on errror
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*
	 * Setting the bit at the index to 1,
	 * leaving all others unchaged, and returnig the 1
	 */
	return (*n = *n | 1 << index);
}
