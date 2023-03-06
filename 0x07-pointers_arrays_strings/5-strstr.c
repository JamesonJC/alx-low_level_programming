#include "main.h"

/**
 * _strstr - searches a substring
 * @haystack: main string to be searched
 * @needle: substring to be located in main
 * Return: ponter of needle start, null if not foung
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*haystack == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			for ( ; haystack[i] == needle[i]; i++)
				if (needle[i + 1] == '\0')
					return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
