#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: printed character
 * Return: 1 on success, -1 on error with correct error no
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
