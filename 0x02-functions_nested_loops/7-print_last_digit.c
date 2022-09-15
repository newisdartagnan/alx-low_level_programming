#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - Does nothing with void as arg
 * @x: a user-caractere
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */

int print_last_digit(int x)
{
	int d, y, w;


	d = x % 10;
	w = d * 11;
	y = (unsigned int)((w < 0) ? -w : w);
	return (y);
}
