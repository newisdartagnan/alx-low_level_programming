#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_numbers - Does nothing with void as arg
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
void print_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

