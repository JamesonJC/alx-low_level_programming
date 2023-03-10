#include <stdio.h>
#include "main.h"
/**
  *_isalpha - Function check for  alphabets characte
  *@c: The function takes c as an argumentr
  *Return: The function  returns the either 0 or 1
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
