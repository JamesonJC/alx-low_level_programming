#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char accepted  on the parameter to be checked
 *
 *Return: The value 1 or 0 is returned
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
