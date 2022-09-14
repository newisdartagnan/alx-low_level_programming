#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _once - writes the character _putchar to stdout
 * @_putchar: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _once(void)
{
	char c[8];
	int i;

	c[0] = '_';
	c[1] = 'p';
	c[2] = 'u';
	c[3] = 't';
	c[4] = 'c';
	c[5] = 'h';
	c[6] = 'a';
	c[7] = 'r';
	c[8] = '\0';
	
	for (i = 0; (long unsigned int)i < strlen (c); i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
int main(void)
{
	_once();
	return 0;
}
