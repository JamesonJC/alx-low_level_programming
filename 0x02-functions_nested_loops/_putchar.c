#include <main.h>
#include <unistd>

/**
 *_putchar - it write into the stdout the letters
 *
 *Return: successful termination of the function 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
