#include "main.h"
/**
 *_isdigit - function to test if number is a digit or not
 *@c: an arguments to be tested
 *Return: 1 or 0 if is digit or not respectively
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
