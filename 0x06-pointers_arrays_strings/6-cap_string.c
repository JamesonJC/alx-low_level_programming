#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string taken by the function
 * Return: string with capital letters
 */

char *cap_string(char *s)
{
	char sc[] = {32, 9, '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}'};
	int i, ln = 13, idx = 0;

	while (s[idx])
	{
		i = 0;
		while (i < ln)
		{
			if ((idx == 0 || s[idx - 1] == sc[i]) && (s[idx] >= 97 && s[idx] <= 122))
				s[idx] = s[idx] - 32;
			i++;
		}
		idx++;
	}
	return (s);
}
