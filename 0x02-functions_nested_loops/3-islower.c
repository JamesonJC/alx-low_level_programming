#include <stdio.h>
/**
* islower - Function checks for lowercases and uppercases
*the funvtion is void,is returns nothing
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
