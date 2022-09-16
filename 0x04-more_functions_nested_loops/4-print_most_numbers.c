#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - Does nothing with void as arg
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}


