#include <stdio.h>
/**
 *main - main begins the program executionn
 *
 * Return: Program execution succesful
 */
int main(void)
{
	char l = 'z';

	while(l >= 'a')
	{
		print("%c", l);
		l--;
	}
	return (0);
}
