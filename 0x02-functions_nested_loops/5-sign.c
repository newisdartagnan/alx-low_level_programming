#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - Does nothing with void as arg
 * @c: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int print_sign(int c)
{
	int i, j, k;

	i = 1;
	j = 0;
	k = -1;
	if (c > 0)
	{
		_putchar(43);
		return (i);
	}
	else
		if (c == 0)
		{
			_putchar('0');
			return (j);
		}
		else
		{
			_putchar(45);
			return (k);
		}
}
