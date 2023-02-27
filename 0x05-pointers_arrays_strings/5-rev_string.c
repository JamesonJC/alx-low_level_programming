#include "main.h"

/**
 * rev_string - The function reverses a string
 * @s: The string that is taken in the function
 */
void rev_string(char *s)
{
	int i, count = 0;
	char rev_s = s[0];

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		count--;
		rev_s = s[i];
		s[i] = s[count];
		s[count] = rev_s;
	}
}
