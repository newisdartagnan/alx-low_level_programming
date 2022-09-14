#include <stdio.h>
#include <string.h>

#include "main.h"
/**
 * _once - Does nothing with void as arg
 *
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
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
	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
/**
 * main - Brief description of function.
 * Return: Describe the return value of function_name.
 *
 * The return value description can also have multiple paragraphs, and should
 * be placed at the end of the comment block.
 */

int main(void)
{
	_once();
	return (0);
}
