#include "main.h"

/**
 * flip_bits - Number of bits need to be flipped to get from 1 num to another
 * @n: The first number
 * @m: The second number
 * Return: The value of occurance of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*Initializations*/
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	/*looping through all the bits of xor counting 1's*/
	while (xor > 0)
	{
		/*checking the least significant bit*/
		if (xor & 1)
			count++;/*increament if different*/

		/*move to the next bit*/
		xor >>= 1;
	}

	/*return the total number of different bits/count*/
	return (count);
}
