#include <stdio.h>
#include <string.h>

#include "main.h"
/**
 * _once - Does nothing with void as arg
 *
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */



/* betty style doc for function main goes there */

/**
 * main - function main to start program
 * @void
 * Context: _once()
 * Description: Does nothing with void as arg
 * Return: to end program 0.
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
	for (i = 0; i < strlen(c); i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
int main(void)
{
	_once();
	return (0);
}
