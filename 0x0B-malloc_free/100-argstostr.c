#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments value
 * Return: a pinter to concatinated string
 */

char *argstostr(int ac, char **av)
{
	char *sPtr;
	int i = 0, no_arg, len, byte;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (no_arg = 0; no_arg < ac; no_arg++)
	{
		for (byte = 0; av[no_arg][byte]; byte++)
			len++;
	}

	sPtr = (char *) malloc((sizeof(char) * len + 1));

	if (sPtr == NULL)
		return (NULL);

	for (no_arg = 0; no_arg < ac; no_arg++)
	{
		for (byte = 0; av[no_arg][byte]; byte++)
			sPtr[i++] = av[no_arg][byte];

		sPtr[i++] = '\n';
	}
	sPtr[len] = '\0';

	return (sPtr);
}
