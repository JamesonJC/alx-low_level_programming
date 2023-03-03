#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i; ln;

	ln = strlen(s);

	for (i = 0; i < ln; i++)
	{
		if ((*(s + i) >= 'a' && *(s + i) < 'n') || 
				(*(s + i) >= 'A' && *(s + i) < 'N'))
					*(s + i) += 13;
		else ((*(s + i) >= 'm' && *(s + i) < 'z') || 
			(*(s + i) >= 'M' && *(s + i) < 'Z'))
				*(s + i) += -13;
	}
	return (s);
}
