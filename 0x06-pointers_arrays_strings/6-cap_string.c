#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string taken by the function
 * Return: string with capital letters
 */

char *cap_string(char *s)
{
	char sc[] = {32, 9, '\n', ',', '.', '!', '!', '?', '"', '(', ')', '{', '}'};
	int i, ln = 13, index = 0;

	while (s[index])
	{
		i = 0;
		while (i < ln)
		{
			if ((index == 0 || s[a - 1] == sc[i]) && (s[index] >= 97 && s[index] <= 122))
				s[index] = s[index] - 32;
			i++;
		}
		index++;
	}
	return (s);
}
