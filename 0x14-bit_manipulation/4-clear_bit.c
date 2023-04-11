#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at an index
 * @n: Pointer to a string with binary numbers
 * @index: The position at which the bit 0 is set
 * Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*Set the bit at the index value to zero*/
	*n &= ~(1 << index);

	return (1);
}
