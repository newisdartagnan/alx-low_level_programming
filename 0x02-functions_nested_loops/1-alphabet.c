#include <stdio.h>
#include "main.h"
/**
 * print_alphabet  - Does nothing with void as arg
 *
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

void print_alphabet(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
}

