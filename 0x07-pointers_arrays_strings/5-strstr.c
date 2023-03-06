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

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
