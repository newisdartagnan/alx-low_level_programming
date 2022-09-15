#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10  - Does nothing with void as arg
 *
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

void print_alphabet_x10(void)
{	int x, i;

	i = 0;
	x = 'a';
	while (i <= 9)
	{
		x = 'a';
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
	_putchar('\n');
	i++;
	}

}


