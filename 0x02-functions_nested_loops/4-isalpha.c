#include <stdio.h>
#include "main.h"
/**
* islower - Function check for  alphabets character
*the function is not void, returns the character
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
