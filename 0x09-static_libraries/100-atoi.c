#include "main.h"

/**
 * _atoi - The function print the string, and a new line after th str
 * @s: The string taken by the function as the parameter
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sn = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			sn = sn * (-1);
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * sn);
}
