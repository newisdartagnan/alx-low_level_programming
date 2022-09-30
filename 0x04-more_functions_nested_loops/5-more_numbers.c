#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * more_numbers - Does nothing with void as arg
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
void more_numbers(void)
{
	int i, j, c;

	j = 0;
	while (j < 10)
	{
		c = 48;
		while (c < 58)
		{
			_putchar(c);
			c++;
		}
		c = 49;
		while (c < 50)
		{	i = 48;
			while (i < 53)
			{
				
				_putchar(i);
				i++;
			}
			c++;
		}
		_putchar('\n');
		j++;
	}
}


