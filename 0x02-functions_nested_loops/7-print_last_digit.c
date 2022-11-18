#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - Does nothing with void as arg
 * @x: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
