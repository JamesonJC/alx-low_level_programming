#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * strtow - function that splits a string into words.
 * @str: string to be splitted into words
 * Return: Pointer to the array of words of the string on success
 */
char **strtow(char *str)
{
	char **sPtr;
	int i, j, k, l, numOfWrds;

	i = 0;
	numOfWrds = 0;
	while (str[i])
	{
		if (str == NULL || str[0] == '\0')
			return (NULL);

		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
			numOfWrds++;
		i++;
	}

	sPtr = malloc(sizeof(char *) * (numOfWrds + 1));

	if (sPtr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; str[i]; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
		{
			j = i;
			while (isalpha(str[j]))
			{
				j++;
			}

			sPtr[k] = malloc((j - i + 1) * sizeof(char));
			if (sPtr[k] == NULL)
			{
				l = k;
				for ( ; l >= 0; l--)
					free(sPtr[k]);
				free(sPtr);
				return (NULL);
			}
			
			strncpy(sPtr[k], &str[i], j - i);
			sPtr[k][j - 1] = '\0';
			k++;
		}
	}
	sPtr[k] = NULL;

	return (sPtr);
}
