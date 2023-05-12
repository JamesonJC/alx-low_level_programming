#include "main.h"

/**
 * get_endianness - determines the endianness
 * Return: Boolen value, (0 or 1)
 */

int get_endianness(void)
{
	/*Declaration and intializing int var n*/
	int n = 1;

	/*declaring a char pointer and assigning it the address of int n*/
	char *nPtr = (char *) &n;

	/*Returnig the first value of byte of n*/
	return (*nPtr == 1);
}
