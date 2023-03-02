#include "main.h"

/**
 * *string_toupper - Converts lowecase string to uppercase
 * @s: The string param pointer
 * Return: The uppercase string
 */

char *string_toupper(char *s)
{
	int ln = 0;

	while (s[ln])
	{
		if (s[ln] >= 97 && s[ln] <= 122)
			s[ln] = s[ln] - 32;
		ln++;
	}

	return (s);
}
