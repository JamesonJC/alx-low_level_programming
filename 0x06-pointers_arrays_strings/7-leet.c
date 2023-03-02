#include "main.h"

/**
 * leet - Function encode string
 *@s: The string to be encoded
 *Return: an Encoded string
 */

char *leet(char *s)
{
	int i, j, ln = 5;
	char replaced[5] = {'A', 'E', 'O', 'T', 'L'};
	char placed[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < ln; j++)
		{
			if (s[i] == replaced[j] || s[i] - 32 == replaced[j])
				s[i] = placed[j];
		}
	return (s);
}
