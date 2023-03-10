#include <stdio.h>
/**
  * _islower - Function checks for lowercases and uppercases
  *@c: it take the in character c as the single parameter
  *Return: the funtionreturns 1 or 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
